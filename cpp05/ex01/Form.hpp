#ifndef FORM_HPP
# define FORM_HPP
# pragma once
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;

    public:
        Form(std::string name, int singGrade, int executeGrade);
        Form( Form const &copy);
        ~Form();

        //GETTERS
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSigned( ) const;

        bool beSigned(int grade, std::string name);

        //EXCEPTIONS
        class GradeTooHighException: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Grade too high";
            }
        };

        class GradeTooLowException: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Grade too low";
            }
        };
};

std::ostream &operator<<( std::ostream &o, Form const &i);

#endif
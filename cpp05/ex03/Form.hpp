#ifndef FORM_HPP
# define FORM_HPP
# pragma once
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;
    protected:
        std::string _target;
        Form();
    public:
        Form(std::string name, int singGrade, int executeGrade);
        Form( Form const &copy);
        ~Form();

        //GETTERS
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSigned() const;

        bool beSigned(int grade, std::string name);
        virtual void execute(const Bureaucrat &executor) const = 0;

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

        class NotSignedException: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Form not signed, impossible to execute";
            }
        };
};

std::ostream &operator<<( std::ostream &o, Form const &i);

#endif
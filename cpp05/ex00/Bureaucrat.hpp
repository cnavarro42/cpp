#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <exception>

class Bureaucrat
{
        const std::string   _name;
        id_t                _grade;
    public:
        Bureaucrat(const std::string name, int grade);
        Bureaucrat( Bureaucrat const &copy);
        ~Bureaucrat();
        Bureaucrat &operator=( Bureaucrat const &assig);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade(int grades);
        void decrementGrade(int grades);

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
std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
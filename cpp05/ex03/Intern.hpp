#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include <iostream>

class Intern
{
    public:
        Intern();
        Intern( Intern const &copy);
        ~Intern();

        Form *makeForm(std::string form, std::string target);
        Intern &operator=( Intern const &assig);

    class UnidentifiedFormException: public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Form type unidentified";
        }
    };
};

#endif
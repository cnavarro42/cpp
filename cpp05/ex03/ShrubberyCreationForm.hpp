#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# pragma once
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm( ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const &assig);

        void execute(const Bureaucrat &executor) const;
};

#endif
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# pragma once
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class PresidentialPardonForm : public Form
{
    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm( PresidentialPardonForm const &copy);
        PresidentialPardonForm &operator=( PresidentialPardonForm const &assig);

        void execute(const Bureaucrat &executor) const;
};

#endif
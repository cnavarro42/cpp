#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# pragma once
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm( RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=( RobotomyRequestForm const &assig);

        void execute(const Bureaucrat &executor) const;
};

#endif
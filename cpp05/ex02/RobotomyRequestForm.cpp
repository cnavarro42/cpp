#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("shrubberyCreation", 145, 137)
{
    std::cout << "Default Constructor called" << std::endl;
    this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    if (&assig == this)
		return *this;
	this->_target = assig._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    std::cout << "Form " << this->getName() << "executed"<< std::endl;
    std::cout <<  "Some Drilling noise beep beep..." << std::endl;
    std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}
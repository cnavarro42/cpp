#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonCreation", 145, 137)
{
    std::cout << "Default Constructor called" << std::endl;
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    if (&assig == this)
		return *this;
	this->_target = assig._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    std::cout << "Form " << this->getName() << " executed"<< std::endl;
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
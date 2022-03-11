#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubberyCreation", 145, 137)
{
    std::cout << "Shrub Default Constructor called" << std::endl;
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrub Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    if (&assig == this)
		return *this;
	this->_target = assig._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    std::cout << "Form " << this->getName() << " executed"<< std::endl;
    std::fstream file;

    file.open(this->_target + "_shrubbery", std::fstream::out);
    if (file.is_open())
    {
        file << "     ccee88oo" << std::endl;
        file << "  C8O8O8Q8PoOb o8oo" << std::endl;
        file << " dOB69QO8PdUOpugoO9bD" << std::endl;
        file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        file << "    6OuU  /p u gcoUodpP" << std::endl;
        file << "      \\\\//  /douUP" << std::endl;
        file << "        \\\\////" << std::endl;
        file << "         |||/\\" << std::endl;
        file << "         |||\\/" << std::endl;
        file << "         |||||" << std::endl;
        file << "   .....//||||\\...." << std::endl;
    }
}
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern Constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called" << std::endl;
}

Intern::Intern( Intern const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=( Intern const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this == &assig)
		return *this;
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{

    std::string actions[3] = {"robotomy request", "presidential request", "shrubbery request"};
    int number;
    Form *rrf;

    number = -1;
    for (int i = 0; i < 3; i++)
    {
        if (actions[i] == (form))
        {
            number = i;
            break ;
        }
    }

    switch (number)
    {
    case 0:
        rrf = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << rrf->getName() << std::endl;
        break;
    case 1:
        rrf = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << rrf->getName() << std::endl;
        break;
    case 2:
        rrf = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << rrf->getName() << std::endl;
        break;
    default:
        throw Intern::UnidentifiedFormException();
        break;
    }
    return rrf;
}

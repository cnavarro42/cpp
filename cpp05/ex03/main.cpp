#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Intern noname;
		Form *form;
		Bureaucrat	bureaucrat("bureaucratín", 1);

		form = noname.makeForm("robotomy request", "Bender");

		bureaucrat.signForm(*form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << std::endl;

	try
	{
		Intern noname;
		Form *form;
		Bureaucrat	bureaucrat("bureaucratín", 1);

		form = noname.makeForm("presidential request", "Bender");

		bureaucrat.signForm(*form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << std::endl;

	try
	{
		Intern noname;
		Form *form;
		Bureaucrat	bureaucrat("bureaucratín", 1);

		form = noname.makeForm("shrubbery request", "Bender");

		bureaucrat.signForm(*form);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

		std::cout << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << std::endl;

	std::cout << std::endl;
	return 0;
}
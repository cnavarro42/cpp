#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("bureaucratín", 1);
		RobotomyRequestForm	robot("roboty");

		bureaucrat.signForm(robot);
		bureaucrat.executeForm(robot);
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
		Bureaucrat	bureaucrat("bureaucratín", 1);
		PresidentialPardonForm	presidente("presi");

		bureaucrat.signForm(presidente);
		bureaucrat.executeForm(presidente);
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
		Bureaucrat	bureaucrat("bureaucratín", 1);
		ShrubberyCreationForm	shrubbery("shrub");

		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
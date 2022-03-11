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
	
	return 0;
}
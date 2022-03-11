#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("Bureaucratín", 10);
        Form form("secret", 30, 10);
        std::cout << std::endl;

        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        std::cout << std::endl;

        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Bureaucratín", 40);
        Form form("secret", 30, 10);
        std::cout << std::endl;

        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
        std::cout << std::endl;

        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("Bureaucratín", 145);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(5);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(5);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade(15);
        std::cout << bureaucrat << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
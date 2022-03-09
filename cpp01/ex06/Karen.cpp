#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!." << std::endl << std::endl;
}

void Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.." << std::endl << std::endl;
}

void Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now" << std::endl;
}

void Karen::insignificant(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
}

int Karen::select_number(std::string level)
{
    std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (actions[i] == (level))
            return (i);
    }
    return (4);
}

void Karen::complain( std::string level)
{
    int number;

    number = this->select_number(level);

    switch (number)
    {
    case 0:
        this->Karen::debug();
    case 1:
        this->Karen::info();
    case 2:
        this->Karen::warning();
    case 3:
        this->Karen::error();
        break;
    default:
        this->Karen::insignificant();
        break;
    }
}
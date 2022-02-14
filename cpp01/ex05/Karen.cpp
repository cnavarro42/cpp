#include "Karen.hpp"

Karen::Karen()
{
    std::cout << "Hi, I'm Karen, listen to me" << std::endl;
}
Karen::~Karen()
{
}
void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!." << std::endl;
}
void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.." << std::endl;
}
void Karen::error( void )
{
    std::cout << "Hi, I'm Karen, listen to me" << std::endl;
}
void Karen::complain( std::string level)
{
    std::string actions[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Karen::*function[4])(void);

    function[0] = &Karen::debug;
    function[1] = &Karen::info;
    function[2] = &Karen::warning;
    function[3] = &Karen::error;

    for (int i = 0; i < 4; i++)
    {
        if (actions[i].compare(level))
            (this->*function[i])();
    }   
}
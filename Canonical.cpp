#include "Canonical.hpp"

Canonical::Canonical()
{
    std::cout << "Default Constructor called" << std::endl;
}

Canonical::~Canonical()
{
    std::cout << "Destructor called" << std::endl;
}

Canonical::Canonical( Canonical const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = copy;
}

Canonical &Canonical::operator=( Canonical const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

std::ostream &operator<<( std::ostream & o, Canonical const &i)
{
    o << "Value of _n is : ";

    return (o);
}
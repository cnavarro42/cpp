#include "Canonical.hpp"

Canonical::Canonical()
{
    this->_n = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Canonical::~Canonical()
{
    std::cout << "Destructor called" << std::endl;
}

Canonical::Canonical( Canonical const &src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Canonical &Canonical::operator=( Canonical const &rhs)
{
        std::cout << "Assignment operator called" << std::endl;
        return *this;
}

int Canonical::getN( void ) const
{
    return (this->_n);
}

std::ostream &operator<<( std::ostream & o, Canonical const &i)
{
    o << "Value of _n is : " << i.getN();

    return (o);
}
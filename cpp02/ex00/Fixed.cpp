#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fixed_point = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=( Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    
    if (this != &rhs)
        this->_fixed_point = rhs.getRawBits();
    
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits function called" << std::endl;
    return (this->_fixed_point);
}

void Fixed::setRawBits( int const raw )
{
     this->_fixed_point = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i)
{
    o << "Value of _fixed_point is : " << i.getRawBits();

    return (o);
}
#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fixed_point = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed( int const intNum)
{
    this->_fixed_point = intNum << this->_bits;
    std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed( float floatNum)
{
    this->_fixed_point = (int)(floatNum * ( 1 << this->_bits));
    std::cout << "Float Constructor called" << std::endl;
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

float Fixed::toFloat( void ) const
{
    return ((float)(this->_fixed_point) / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (float)this->_fixed_point / (float)(1 << this->_bits);
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
    return (this->_fixed_point);
}

void Fixed::setRawBits( int const raw )
{
     this->_fixed_point = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i)
{
    o << i.toFloat();

    return (o);
}
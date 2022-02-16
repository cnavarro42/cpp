#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
    std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed( int const intNum)
{
    this->_value = intNum << this->_bits;
    std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed( float floatNum)
{
    this->_value = (int)(floatNum * ( 1 << this->_bits));
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
    return ((float)(this->_value) / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (float)this->_value / (float)(1 << this->_bits);
}

Fixed & Fixed::operator=( Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
     this->_value = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i)
{
    o << i.toFloat();

    return (o);
}

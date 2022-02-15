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


//////////////////// COMPARISON OPERATORS

bool    Fixed::operator>(Fixed const &alter) const
{
    return (this->getRawBits() > alter.getRawBits());
}

bool    Fixed::operator<(Fixed const &alter) const
{
    return (this->getRawBits() < alter.getRawBits());
}

bool    Fixed::operator>=(Fixed const &alter) const
{
    return (this->getRawBits() >= alter.getRawBits());
}

bool    Fixed::operator<=(Fixed const &alter) const
{
    return (this->getRawBits() <= alter.getRawBits());
}

bool    Fixed::operator==(Fixed const &alter) const
{
    return (this->getRawBits() == alter.getRawBits());
}

bool    Fixed::operator!=(Fixed const &alter) const
{
    return (this->getRawBits() != alter.getRawBits());
}

//////////////////// ARITHMETIC OPERATORS

Fixed Fixed::operator+( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() + alter.toFloat());
}
Fixed Fixed::operator-( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() - alter.toFloat());
}
Fixed Fixed::operator*( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() * alter.toFloat());
}
Fixed Fixed::operator/( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() / alter.toFloat());
}

//////////////////// INCREMENT/DECREMENT OPERATORS

Fixed Fixed::operator++( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() + 1);
    return (pre);
}

Fixed &Fixed::operator++( void )
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() - 1);
    return (pre);
}

Fixed &Fixed::operator--( void )
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed( int const intNum)
{
    this->_value = intNum << this->_bits;
}

Fixed::Fixed( float floatNum)
{
    this->_value = (int)(floatNum * ( 1 << this->_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed( Fixed const & src)
{
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

std::ostream & operator<<( std::ostream &o, Fixed const &i)
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
    return (ret);
}
Fixed Fixed::operator-( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() - alter.toFloat());
    return (ret);
}
Fixed Fixed::operator*( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() * alter.toFloat());
    return (ret);
}
Fixed Fixed::operator/( Fixed const & alter )
{
    Fixed ret;

    ret = Fixed(this->toFloat() / alter.toFloat());
    return (ret);
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

//////////////////// MAX & MIN OPERATORS


Fixed &Fixed::min( Fixed &a, Fixed &b )
{
    if (a < b)
        return (a);
    return (b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::min( Fixed const &a, Fixed const &b )
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::max( Fixed const &a, Fixed const &b )
{
    if (a > b)
        return (a);
    return (b);
}

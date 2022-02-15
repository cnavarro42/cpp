#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return (0);
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

Fixed Fixed::operator++( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() + 1);
    return (pre);
}

Fixed Fixed::operator++( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() + 1);
    return (pre);
}

Fixed Fixed::operator++( int )
{
    Fixed pre = *this;

    this->setRawBits(this->getRawBits() + 1);
    return (pre);
}

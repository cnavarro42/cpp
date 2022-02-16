#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    int                 _value;
    static const int    _bits = 8;

    public:
        Fixed();
        Fixed( int const num );
        Fixed( float const num );
        Fixed( Fixed const & src );
        ~Fixed();

        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed & operator=( Fixed const & rhs);

        bool    operator>( Fixed const &alter ) const;
        bool    operator<( Fixed const &alter ) const;
        bool    operator>=( Fixed const &alter ) const;
        bool    operator<=( Fixed const &alter ) const;
        bool    operator==( Fixed const &alter ) const;
        bool    operator!=( Fixed const &alter ) const;

        Fixed   operator+( Fixed const & alter );
        Fixed   operator-( Fixed const & alter );
        Fixed   operator*( Fixed const & alter );
        Fixed   operator/( Fixed const & alter );

        Fixed   operator++( int );
        Fixed   &operator++( void );
        Fixed   operator--( int );
        Fixed   &operator--( void );

        static Fixed        &min( Fixed &a, Fixed &b );
        static Fixed        &max( Fixed &a, Fixed &b );
        static const Fixed  &min( Fixed const &a, Fixed const &b );
        static const Fixed  &max( Fixed const &a, Fixed const &b );
    //GETTERS
        int getRawBits( void ) const;
    //SETTERS
        void setRawBits( int const raw );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i);

#endif
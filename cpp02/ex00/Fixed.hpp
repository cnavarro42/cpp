#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    int _value;
    static const int _bits = 8;

    public:
        Fixed();
        Fixed( Fixed const & src);
        ~Fixed();

        Fixed & operator=( Fixed const & rhs);
    //GETTERS
        int getRawBits( void ) const;
    //SETTERS
        void setRawBits( int const raw );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i);

#endif
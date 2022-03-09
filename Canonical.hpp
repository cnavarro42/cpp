#ifndef CANONICAL_HPP
# define CANONICAL_HPP

# include <iostream>

class Canonical
{
    int _n;

    public:
        Canonical();
        Canonical( Canonical const &src);
        ~Canonical();

        Canonical &operator=( Canonical const &rhs);
    //GETTERS
        int getN( void ) const;
    //SETTERS
};

std::ostream &operator<<( std::ostream &o, Canonical const &i);

#endif
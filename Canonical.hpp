#ifndef CANONICAL_HPP
# define CANONICAL_HPP

# include <iostream>

class Canonical
{
    public:
        Canonical();
        Canonical( Canonical const &copy);
        ~Canonical();

        Canonical &operator=( Canonical const &assig);
};

std::ostream &operator<<( std::ostream &o, Canonical const &i);

#endif
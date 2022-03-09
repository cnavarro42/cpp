#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        Brain( Brain const & src);
        virtual ~Brain();

        Brain & operator=( Brain const & rhs);
};

#endif
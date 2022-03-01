#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain( Brain const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=( Brain const & rhs)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

#include "Dog.hpp"

Dog::Dog()
{
    set_type("Dog");
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog( Dog const & src)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = src;
}

Dog & Dog::operator=( Dog const & rhs)
{
    this->type = rhs.type;
    std::cout << "Dog Assignment operator called" << std::endl;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog says woof!" << std::endl;
}
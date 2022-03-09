#include "Dog.hpp"

Dog::Dog()
{
    this->braining = new Brain();
    set_type("Dog");
    std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->braining;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog( Dog const & src)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *(this->braining) = *(src.braining);
    *this = src;
}

Dog &Dog::operator=( Dog const & rhs)
{
    std::cout << "Animal Assignment operator called since dog" << std::endl;
    this->type = rhs.type;
    *(this->braining) = *(rhs.braining);
    return *this;
}

Animal &Dog::operator=( Animal const &rhs)
{
    this->set_type(rhs.getType());
    std::cout << "Dog Assignment operator called" << std::endl;
    this->setBraining(rhs.getBraining());
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog says woof!" << std::endl;
}

Brain *Dog::getBraining(void) const
{
    return (this->braining);
}

void	Dog::setBraining(Brain *braining)
{
    this->braining = braining;
}
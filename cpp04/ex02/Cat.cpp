#include "Cat.hpp"

Cat::Cat()
{
    this->braining = new Brain();
    set_type("Cat");
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->braining;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( Cat const & src)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *(this->braining) = *(src.braining);
    *this = src;
}

Cat &Cat::operator=( Cat const & rhs)
{
    std::cout << "Animal Assignment operator called since cat" << std::endl;
    this->type = rhs.type;
    *(this->braining) = *(rhs.braining);
    return *this;
}

Animal &Cat::operator=( Animal const &rhs)
{
    this->set_type(rhs.getType());
    std::cout << "Cat Assignment operator called" << std::endl;
    this->setBraining(rhs.getBraining());
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat says miau!" << std::endl;
}

Brain *Cat::getBraining(void) const
{
    return (this->braining);
}

void	Cat::setBraining(Brain *braining)
{
    this->braining = braining;
}
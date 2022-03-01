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
    *this = src;
    *(this->braining) = *(src.braining);
}

Cat & Cat::operator=( Cat const & rhs)
{
    this->type = rhs.type;
    std::cout << "Cat Assignment operator called" << std::endl;
    *(this->braining) = *(rhs.braining);
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
#include "Cat.hpp"

Cat::Cat()
{
    set_type("Cat");
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat( Cat const & src)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = src;
}

Cat & Cat::operator=( Cat const & rhs)
{
    this->type = rhs.type;
    std::cout << "Cat Assignment operator called" << std::endl;
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat says miau!" << std::endl;
}
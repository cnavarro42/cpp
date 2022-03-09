#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src)
{
    std::cout << "WrongAnimal Copy Constructor called" << std::endl;
    this->type = src.type;
    *this = src;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs)
{
    this->type = rhs.type;
    std::cout << "WrongAnimal Assignment operator called" << std::endl;
    return *this;
}
std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void WrongAnimal::set_type(std::string ty)
{
    this->type = ty;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "What's that wrong sound?" << std::endl;
}
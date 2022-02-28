#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal( Animal const & src)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    this->type = src.type;
    *this = src;
}

Animal & Animal::operator=( Animal const & rhs)
{
    this->type = rhs.type;
    std::cout << "Animal Assignment operator called" << std::endl;
    return *this;
}
std::string Animal::getType( void ) const
{
    return (this->type);
}

void Animal::set_type(std::string ty)
{
    this->type = ty;
}

void    Animal::makeSound(void) const
{
    std::cout << "What's that sound?" << std::endl;
}
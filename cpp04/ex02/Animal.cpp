#include "Animal.hpp"

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
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

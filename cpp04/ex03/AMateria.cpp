#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "Amateria Overload constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Amateria Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}
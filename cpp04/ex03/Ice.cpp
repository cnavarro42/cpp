#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    this->_type = "ice";
}

Ice::Ice(std::string const type) : AMateria(type)
{

}

Ice::~Ice()
{

}

Ice::Ice( Ice const &src)  : AMateria(src.getType())
{
    std::cout << "Ice Copy Constructor called" << std::endl;
    *this = src;
}

Ice & Ice::operator=( Ice const &rhs)
{
    std::cout << "Ice Assignment operator called" << std::endl;
    this->_type = rhs._type;
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *ret = new Ice;
    return (ret);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
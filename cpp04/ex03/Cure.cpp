#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>
Cure::Cure() : AMateria("cure")
{
    this->_type = "cure";
}

Cure::Cure(std::string const type) : AMateria(type)
{
    this->_type = type;
}

Cure::~Cure()
{

}

Cure::Cure( Cure const &src) : AMateria(src.getType())
{
    std::cout << "Cure Copy Constructor called" << std::endl;
    *this = src;
}

Cure & Cure::operator=( Cure const &rhs)
{
    std::cout << "Cure Assignment operator called" << std::endl;
    this->_type = rhs.getType();
    return *this;
}

AMateria* Cure::clone() const
{
    AMateria *ret = new Cure;
    return (ret);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
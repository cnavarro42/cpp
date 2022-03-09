#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource( MateriaSource const &src)
{
    std::cout << "MateriaSource Copy Constructor called" << std::endl;
	this->_iKnowIce = src._iKnowIce;
	this->_iKnowCure = src._iKnowCure;
}

MateriaSource & MateriaSource::operator=( MateriaSource const &rhs)
{
    std::cout << "MateriaSource Assignment operator called" << std::endl;
    if (this == &rhs)
		return *this;
	return *this;
}

void MateriaSource::learnMateria(AMateria *mat)
{
    if (mat->getType() == "ice")
        this->_iKnowIce = true;
    else if (mat->getType() == "cure")
        this->_iKnowCure = true;
    delete mat;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    if (type == "cure" && this->_iKnowCure == true)
        return (new Cure());
    if (type == "ice" && this->_iKnowIce == true)
        return (new Ice());
    else
        return (0);
}
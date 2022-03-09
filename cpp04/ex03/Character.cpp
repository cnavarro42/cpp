#include "Character.hpp"

Character::Character()
{

}

Character::Character(const std::string name) : _name(name)
{

}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_m[i])
            delete _m[i];
    }
}

Character::Character(Character const &src)
{
    std::cout << "Character Copy Constructor called" << std::endl;
    this->_name = src.getName();
    for (int i = 0; i < 4; i++)
        this->_m[i] = src._m[i];
}

Character &Character::operator=( Character const &rhs)
{
    std::cout << "Character Assignment operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs.getName();
    for (int i = 0; i < 4; i++)
        this->_m[i] = rhs._m[i];
    return *this;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_m[i])
        {
            _m[i] = m;
            return ;
        }
    }
    std::cout << "No slots in inventory, u can't equip this materia" << std::endl;
    return ;
}

void Character::unequip(int idx)
{
    if (_m[idx])
        _m[idx] = NULL;
    else
        std::cout << "There's no materia in this slot" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (_m[idx])
            this->_m[idx]->use(target);
    else
        std::cout << "There's no materia in this slot" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->_name);
}
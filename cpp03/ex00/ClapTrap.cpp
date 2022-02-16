#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Claptrap " << this->_name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs)
{
        std::cout << "Assignment operator called" << std::endl;
        if (this != &rhs)
        {
            this->_hitPoints = rhs._hitPoints;
            this->_energyPoints = rhs._energyPoints;
            this->_attackDamage = rhs._attackDamage;
        }
        return *this;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " recieve " << amount << " of damage" << std::endl;
    if (this->_hitPoints >= amount)
        this->_hitPoints -= amount;
    else
        this->_hitPoints = 0;
        std::cout << this->_name << " has " << this->_hitPoints << " of energy" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << this->_name << " repaired " << amount << " of energy" << std::endl;
    if ((this->_hitPoints + amount) > 10)
        this->_hitPoints = 10;
    else
        this->_hitPoints += amount;
    std::cout << this->_name << " has " << this->_hitPoints << " of energy" << std::endl;
}
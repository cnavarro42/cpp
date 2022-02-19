#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Claptrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    this->_maxEnergy = 10;
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
            this->_maxEnergy = rhs._maxEnergy;
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
    if ((this->_hitPoints + amount) > this->_maxEnergy)
        this->_hitPoints = this->_maxEnergy;
    else
        this->_hitPoints += amount;
    std::cout << this->_name << " has " << this->_hitPoints << " of energy" << std::endl;
}

void ClapTrap::set_name( std::string name )
{
    this->_name = name;
}

void ClapTrap::set_hitPoints( unsigned int hitPoints )
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::set_energyPoints( unsigned int energyPoints )
{
    this->_energyPoints = energyPoints;
}
void ClapTrap::set_attackDamage( unsigned int attackDamage )
{
    this->_attackDamage = attackDamage;
}

void ClapTrap::set_maxEnergy(unsigned int maxEnergy)
{
    this->_maxEnergy = maxEnergy;
}

 unsigned int ClapTrap::get_hitPoints(void) const
 {
    return (this->_hitPoints);
 }

unsigned int ClapTrap::get_energyPoints(void) const
{
    return (this->_energyPoints);
}

unsigned int ClapTrap::get_attackDamage(void) const
{
    return (this->_attackDamage);
}

std::string ClapTrap::get_name(void) const
{
    return (this->_name);
}
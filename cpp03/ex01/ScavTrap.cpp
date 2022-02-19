#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    set_name(name);
    set_hitPoints(100);
    set_energyPoints(50);
    set_attackDamage(20);
    set_maxEnergy(100);
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs)
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

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap "<< this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << this->_name << " has entered in Gate keeper mode." << std::endl;
}
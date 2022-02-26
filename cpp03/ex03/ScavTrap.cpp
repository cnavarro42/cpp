#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _startedHitPoints(100), _startedEnergyPoints(50), _startedAttackDamage(20)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    set_hitPoints(this->_startedHitPoints);
    set_energyPoints(this->_startedEnergyPoints);
    set_attackDamage(this->_startedAttackDamage);
    set_maxEnergy(100);
}

ScavTrap::ScavTrap(std::string name) : _startedHitPoints(100), _startedEnergyPoints(50), _startedAttackDamage(20)
{
    set_name(name);
    set_hitPoints(this->_startedHitPoints);
    set_energyPoints(this->_startedEnergyPoints);
    set_attackDamage(this->_startedAttackDamage);
    set_maxEnergy(100);
    std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src) : _startedHitPoints(100), _startedEnergyPoints(50), _startedAttackDamage(20)
{
    set_hitPoints(this->_startedHitPoints);
    set_energyPoints(this->_startedEnergyPoints);
    set_attackDamage(this->_startedAttackDamage);
    set_maxEnergy(100);
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
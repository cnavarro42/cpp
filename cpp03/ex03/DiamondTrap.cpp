#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    set_name(name + "_clap_name");
    set_hitPoints(FragTrap::_startedHitPoints);
    set_energyPoints(ScavTrap::_startedEnergyPoints);
    set_attackDamage(FragTrap::_startedAttackDamage);
    set_maxEnergy(ScavTrap::_maxEnergy);
    std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs)
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

void DiamondTrap::attack(std::string const &target)
{
    std::cout << "DiamondTrap "<< this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Hi, my name is " << ClapTrap::_name << std::endl;
}

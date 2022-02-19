#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    set_name(name);
    set_hitPoints(100);
    set_energyPoints(100);
    set_attackDamage(30);
    set_maxEnergy(100);
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src)
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs)
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

void FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap "<< this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "Hey guys, let's High Five!!!" << std::endl;
}
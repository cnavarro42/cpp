#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    protected:
        const unsigned int _startedHitPoints;
        const unsigned int _startedEnergyPoints;
        const unsigned int _startedAttackDamage;
    public:
        ScavTrap();
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const & src);
        ~ScavTrap();

        ScavTrap & operator=( ScavTrap const & rhs);
        void attack( std::string const &target );
        void guardGate(void);
};

std::ostream & operator<<( std::ostream & o, ScavTrap const & i);

#endif
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        const unsigned int _startedHitPoints;
        const unsigned int _startedEnergyPoints;
        const unsigned int _startedAttackDamage;
    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( const FragTrap &src );
        ~FragTrap();

        FragTrap &operator=( FragTrap const & rhs);
        void attack( const std::string &target );
        void highFiveGuys(void);
};

std::ostream &operator<<( std::ostream & o, FragTrap const & i);

#endif
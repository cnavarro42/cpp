#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap( std::string name );
        DiamondTrap( DiamondTrap const & src);
        virtual ~DiamondTrap();

        DiamondTrap & operator=( DiamondTrap const & rhs);
        void attack( std::string const &target );
        void whoAmI(void);
};

std::ostream & operator<<( std::ostream & o, DiamondTrap const & i);

#endif
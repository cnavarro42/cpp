#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( FragTrap const & src);
        ~FragTrap();

        FragTrap & operator=( FragTrap const & rhs);
        void attack( std::string const &target );
        void highFiveGuys(void);
};

std::ostream & operator<<( std::ostream & o, FragTrap const & i);

#endif
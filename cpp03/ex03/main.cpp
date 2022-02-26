#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
    //ClapTrap clappy("clappy");
    //ClapTrap tommy("tommy");
    DiamondTrap diam("diam");

    diam.whoAmI();
    diam.attack("with the power of DIAMONDS");
    diam.takeDamage(5);
    diam.beRepaired(3);
    diam.highFiveGuys();
    diam.guardGate();

	return 0;
}
#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap clappy("clappy");
    ClapTrap tommy("tommy");

    clappy.attack("tommy");
    tommy.takeDamage(5);
    tommy.beRepaired(3);

	return 0;
}
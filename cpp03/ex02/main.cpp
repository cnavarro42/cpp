#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int	main(void)
{
    //ClapTrap clappy("clappy");
    //ClapTrap tommy("tommy");
    FragTrap fraggy("fraggy");

    fraggy.attack("ENEMIES OF DEMACIAAAA!!");
    fraggy.takeDamage(5);
    fraggy.beRepaired(3);
    fraggy.highFiveGuys();

	return 0;
}
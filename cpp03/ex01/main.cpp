#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void)
{
    //ClapTrap clappy("clappy");
    //ClapTrap tommy("tommy");
    ScavTrap scavy("scavy");

    scavy.attack("ALL OF THEM!!");
    scavy.takeDamage(5);
    scavy.beRepaired(3);
    scavy.guardGate();

	return 0;
}
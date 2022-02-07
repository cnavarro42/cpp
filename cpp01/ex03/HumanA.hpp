#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
        Weapon      &_WeaponA;
        std::string _nameA;

    public:
        HumanA(std::string nameA, Weapon &weaponA);
        ~HumanA();

        void attack(void);
};

#endif
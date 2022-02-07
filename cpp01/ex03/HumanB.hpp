#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
        Weapon      *_WeaponB;
        std::string _nameB;

    public:
        HumanB(std::string nameB);
        ~HumanB();

        void attack(void);
        void setWeapon(Weapon weapon);
};

#endif
#include "HumanB.hpp"

HumanB::HumanB(std::string nameB) : _nameB(nameB)
{
}
HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon weapon)
{
    Weapon *weaponP = &weapon;
    this->_WeaponB = weaponP;
}
void HumanB::attack()
{
    if (this->_WeaponB)
        std::cout << this->_nameB << " attack with " << _WeaponB->getType() << std::endl;
    else
        std::cout << this->_nameB << " has no weapon " << std::endl;
}
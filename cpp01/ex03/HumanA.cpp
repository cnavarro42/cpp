#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon &weaponA) : _WeaponA(weaponA), _nameA(nameA)
{
}
HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << this->_nameA << " attack with " << this->_WeaponA.getType() << std::endl;
}
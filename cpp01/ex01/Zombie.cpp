#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie( std::string name ) : _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "No brains, " << this->_name << " die" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string name)
{
    this->_name = name;
}

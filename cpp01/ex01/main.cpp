#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
    Zombie*  horde = zombieHorde(7, "Zombie_");
    delete[] horde;
    return(0);
}

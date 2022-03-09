#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N > 42)
    {
        std::cout << "You dont't need all those zombies dude, this is not Call of Duty" << std::endl;
        return (NULL);
    }
    Zombie *horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].set_name(name + (char)(i + 49));
        horde[i].announce();
    }
    return (horde);
}

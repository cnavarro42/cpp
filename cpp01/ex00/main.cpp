#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main(void)
{
    Zombie*  cabesita = newZombie("cabesita");
    randomChump("peloFuego");
    delete cabesita;
    return(0);
}

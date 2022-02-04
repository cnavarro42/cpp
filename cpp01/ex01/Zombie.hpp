#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


class Zombie
{
        std::string _name;

    public:
        Zombie();
        ~Zombie();
        Zombie( std::string name );

        void    announce(void) const;
        void    set_name(std::string name);
};

#endif
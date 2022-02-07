#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
        std::string _type;

    public:
        Weapon(std::string type);
        ~Weapon();
        //GETTERS
        std::string getType( void ) const;

        //SETTERS
        void    setType(std::string type);
};

#endif
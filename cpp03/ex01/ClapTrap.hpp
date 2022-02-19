#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
        unsigned int    _maxEnergy;

        void set_name(std::string name);
        void set_hitPoints(unsigned int hitPoints);
        void set_energyPoints(unsigned int energyPoints);
        void set_attackDamage(unsigned int attackDamage);
        void set_maxEnergy(unsigned int _maxEnergy);

        std::string get_name(void) const;
        unsigned int get_hitPoints(void) const;
        unsigned int get_energyPoints(void) const;
        unsigned int get_attackDamage(void) const;

    public:
        ClapTrap();
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap();

        ClapTrap & operator=( ClapTrap const & rhs );
        void attack( std::string const &target );
        void takeDamage( unsigned int amount );
        void beRepaired( unsigned int amount );
};

#endif
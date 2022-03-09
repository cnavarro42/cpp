#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

class Character : public ICharacter
{
        std::string _name;
        AMateria *_m[4];

    public:
        Character();
        Character(const std::string name);
        Character(Character const &src);
        Character &operator=( Character const &rhs);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

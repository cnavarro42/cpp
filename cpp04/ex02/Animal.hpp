#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        virtual ~Animal();
        virtual Animal &operator=( Animal const & rhs) = 0;

        void set_type(std::string ty);
        virtual void makeSound(void) const = 0;
        virtual Brain *getBraining(void) const = 0;

        std::string getType(void) const;
};

#endif
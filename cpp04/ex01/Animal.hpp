#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

        void set_type(std::string ty);
    public:
        Animal();
        Animal( Animal const & src);
        virtual ~Animal();

        Animal & operator=( Animal const & rhs);
        virtual void makeSound(void) const;
        virtual Brain *getBraining(void) const = 0;
        std::string getType(void) const;
};

#endif
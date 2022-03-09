#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
        Brain *braining;
    public:
        Dog();
        Dog( Dog const & src);
        virtual ~Dog();
        Dog & operator=( Dog const & rhs);

        virtual Animal &operator=(const Animal&rhs);
        virtual void makeSound(void) const;
        virtual Brain *getBraining(void) const;
        void	setBraining(Brain *braining);
};

#endif
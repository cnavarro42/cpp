#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
        Brain *braining;
    public:
        Cat();
        Cat( Cat const & src);
        virtual ~Cat();

        Cat & operator=( Cat const & rhs);
        void makeSound(void) const;
        Brain *getBraining(void) const;
};

#endif
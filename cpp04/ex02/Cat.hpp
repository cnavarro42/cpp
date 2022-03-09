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
        
        virtual Animal &operator=(const Animal&rhs);
        virtual void makeSound(void) const;
        virtual Brain *getBraining(void) const;

        void	setBraining(Brain *braining);
};

#endif
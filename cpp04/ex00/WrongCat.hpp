#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
        std::string _type;

    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat( WrongCat const &src);
        virtual ~WrongCat();

        WrongCat &operator=( WrongCat const &rhs);
        void makeSound(void) const;
};

#endif
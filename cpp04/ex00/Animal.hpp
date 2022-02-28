#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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
        std::string getType(void) const;
};

#endif
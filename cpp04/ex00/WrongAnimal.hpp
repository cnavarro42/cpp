#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    private:
        std::string type;

    public:
        void set_type(std::string ty);
        WrongAnimal();
        WrongAnimal( WrongAnimal const &src);
        virtual ~WrongAnimal();

        WrongAnimal &operator=( WrongAnimal const &rhs);
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif
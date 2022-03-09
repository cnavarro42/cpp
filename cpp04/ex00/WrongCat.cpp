#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=( WrongCat const & rhs)
{
    this->set_type(rhs.getType());
    std::cout << "WrongCat Assignment operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat says ke ise nano!" << std::endl;
}
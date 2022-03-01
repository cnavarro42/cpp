#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    Animal *deep;
    Brain *brain;
    Animal *dogsAndCats[10];
    for (int i = 0; i < 10; i++)
    {
        if ((i % 2) == 0)
            dogsAndCats[i] = new Dog();
        else
            dogsAndCats[i] = new Cat();
        std::cout << dogsAndCats[i]->getType() << " " << std::endl;
        dogsAndCats[i]->makeSound();
    }
    
    brain = dogsAndCats[1]->getBraining();
    brain->ideas[0] = "Hi, I'm a Cat";
    brain->ideas[1] = "What's the favourite drink of a cat? Mahou";
    brain->ideas[2] = "What does a cat say in the sea? Miahogo";
    brain->ideas[3] = "I don't know more jokes about cats";

    deep = dogsAndCats[1];

    std::cout << "Ideas of a cat:" << std::endl;
    for (int i = 0; i < 4; i++)
        std::cout << deep->getBraining()->ideas[i] << std::endl;
    for (int i = 0; i < 10; i++)
        delete dogsAndCats[i];
    delete j;   //should not create a leak
    delete i;
    return (0);
}
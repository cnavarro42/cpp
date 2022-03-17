#include "easyfind.hpp"

int main()
{
    std::vector<int>    container;

    for (size_t i = 0; i < 5; i++)
        container.push_back(i * 10);
    for (size_t i = 0; i < 5; i++)
        std::cout << ' ' << container.at(i);

    std::cout << std::endl;

    try
    {
        easyfind(container, 3);
    }
    catch(int)
    {
        std::cout << "Number not found" << std::endl;
    }
    
}
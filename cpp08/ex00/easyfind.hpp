#include <algorithm>
#include <iostream>
#include <vector>
#define ERROR 1

template<typename T>
void easyfind(T &container, int to_search)
{
    if (std::find(container.begin(), container.end(), to_search) != container.end())
        std::cout << "Number was found" << std::endl;
    else
        throw ERROR;
}
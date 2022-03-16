#include <iostream>

template<typename T>
void iter(T *address, int length, void (*f)(const T &element))
{
    for (int i = 0; i < length; i++)
        f(address[i]);
}
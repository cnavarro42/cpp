#include <cstdint>
#include <iostream>

struct Data
{
    int v;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);
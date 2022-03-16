#include "Data.hpp"

int main(void)
{
    Data        *data;
    uintptr_t   serialized;
    Data        *deserialized;

    data = new Data;
    data->v = 42;
    serialized = serialize(data);

    std::cout << serialized << std::endl;

    deserialized = deserialize(serialized);

    std::cout << deserialized->v << std::endl;
    delete data;
}
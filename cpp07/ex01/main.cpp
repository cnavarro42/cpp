#include "iter.hpp"

template<typename T>
void	print(const T &pos)
{
	std::cout << pos << std::endl;
}

int main()
{
    std::string arrays[3] = {"Onii-chan", "Onee-chan", "Daniel-san"};
    double	doubles[4] = {1.2 , 23.3 , 323.43 , 4.0};

    ::iter(arrays, 3, &print);
    ::iter(doubles, 4, &print);
}
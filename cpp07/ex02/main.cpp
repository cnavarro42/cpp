#include "Array.hpp"

int main(void)
{
    Array<char> characters(4);
    Array<double> decimals(3);
    Array<unsigned int> empty;

    characters[0] = 'h';
    characters[1] = 'o';
    characters[2] = 'l';
    characters[3] = 'a';

    decimals[0] = 23.3;
    decimals[1] = 54.2;
    decimals[2] = 42.0;

    for (int i = 0; i < 4; i++)
		std::cout << characters[i];
	std::cout << std::endl;

    for (int i = 0; i < 3; i++)
		std::cout << decimals[i] << std::endl;

    try
    {
        decimals[10] = 10.0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
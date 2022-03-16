#include "Conversor.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Incorrect number of arguments" << std::endl;
        return (1);
    }
    Conversor conversor(argv[1], argv[1]);

    return (0);
}
#include "Replace.hpp"

int finishWithError(std::string error, int num)
{
    std::cout << error << std::endl;
    return (num);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (finishWithError("Incorrect number of arguments", 1));
    Replace rep((std::string)argv[1], (std::string)argv[2], (std::string)argv[3]);
    rep.insertRow();
    return (0);
}
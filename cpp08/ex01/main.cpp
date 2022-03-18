#include "span.hpp"
#include <cstdlib>

int main()
{
    span hello(10);
    span really_big(10000);
    srand (time(NULL));

    try
    {
        for (unsigned int i = 0; i < hello.getSize(); i++)
            hello.addNumber(rand() % 1000);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Numbers on hello are "<< std::endl;
    hello.printIntegers();
    try
    {

        std::cout << "Shortest span in hello is "<< hello.shortestSpan() << std::endl;
        std::cout << "Longest span in hello is "<< hello.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (unsigned int i = 0; i < really_big.getSize(); i++)
        really_big.addNumber(rand() % 100000000);
    //std::cout << "Numbers on really_big are "<< std::endl;
    //really_big.printIntegers();
    try
    {
        std::cout << "Shortest span is "<< really_big.shortestSpan() << std::endl;
        std::cout << "Longest span is "<< really_big.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
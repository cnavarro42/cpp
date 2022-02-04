#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strP = &str;
    std::string &strR = str;

    std::cout << "Direcciones de memoria" << std::endl;
    std::cout << "str : " << &str << std::endl;
    std::cout << "strP: " << strP << std::endl;
    std::cout << "strR: " << &strR << std::endl << std::endl;

    std::cout << "Contenido" << std::endl;
    std::cout << "str : " << str << std::endl;
    std::cout << "strP: " << *strP << std::endl;
    std::cout << "strR: " << strR << std::endl;
}
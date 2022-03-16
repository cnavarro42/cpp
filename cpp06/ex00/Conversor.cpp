#include "Conversor.hpp"
#include <stdlib.h>
#include <string>
#include <iomanip>

Conversor::Conversor(std::string number, char *argv)
{
    if (!strncmp(argv, "nanf", 5) || !strncmp(argv, "-inf", 5) ||
        !strncmp(argv, "+inf", 5) || !strncmp(argv, "nan", 5) ||
        !strncmp(argv, "-inff", 6) || !strncmp(argv, "+inff", 6))
        Conversor::nanOrInfCase(number);
    else
    {
        Conversor::displayChar(number);
        Conversor::displayInt(number);
        Conversor::displayFloat(number);
        Conversor::displayDouble(number);
    }
}

Conversor::~Conversor()
{
}

Conversor::Conversor( Conversor const &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    this ->_nchar = copy._nchar;
    this ->_nint = copy._nint;
    this ->_nfloat = copy._nfloat;
    this ->_ndouble = copy._ndouble;
    *this = copy;
}

Conversor &Conversor::operator=( Conversor const &assig)
{
    std::cout << "Assignment operator called" << std::endl;
    this ->_nchar = assig._nchar;
    this ->_nint = assig._nint;
    this ->_nfloat = assig._nfloat;
    this ->_ndouble = assig._ndouble;
    return *this;
}

void Conversor::displayChar(std::string number)
{
    try
    {
        int num;
        num = std::stoi(number);
        this->_nchar = static_cast<char>(num);
        std::cout << "char: '";
        if (  num <= 32 || num >= 127 )
				std::cout << "Non displayable";
        else
            std::cout << this->_nchar;
        std::cout << "'" << std::endl;
    }
    catch(std::invalid_argument&)
    {
        std::cout << "char: " << "impossible" << std::endl;
    }
}

void Conversor::displayInt(std::string number)
{
    try
    {
        this->_nint = std::stoi(number);

        std::cout << "int: ";
        std::cout << this->_nint;
        std::cout << std::endl;
    }
    catch(std::invalid_argument&)
    {
        std::cout << "int: " << "impossible" << std::endl;
    }
}

void Conversor::displayFloat(std::string number)
{
    try
    {
        this->_nfloat = std::stof(number);

        std::cout << "float: ";
        std::cout << std::fixed << std::setprecision(1) << this->_nfloat;
        std::cout << "f" << std::endl;
    }
    catch(std::invalid_argument&)
    {
        std::cout << "float: " << "impossible" << std::endl;
    }
}

void Conversor::displayDouble(std::string number)
{
    try
    {
        this->_nfloat = std::stof(number);
        this->_ndouble = static_cast<double>(this->_nfloat);

        std::cout << "double: ";
        std::cout << this->_ndouble;
        std::cout << std::endl;
    }
    catch(std::invalid_argument&)
    {
        std::cout << "double: " << "impossible" << std::endl;
    }
}

void Conversor::nanOrInfCase(std::string number)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << stof(number) << "f" << std::endl;
    std::cout << "double: " << number << std::endl;
}
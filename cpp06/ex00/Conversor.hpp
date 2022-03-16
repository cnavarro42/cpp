#ifndef CONVERSOR_HPP
# define CONVERSOR_HPP

# include <iostream>

class Conversor
{
        char    _nchar;
        int     _nint;
        float   _nfloat;
        double  _ndouble;

    public:
        Conversor(std::string number, char *argv);
        Conversor( Conversor const &copy);
        ~Conversor();

        void displayChar(std::string number);
        void displayInt(std::string number);
        void displayFloat(std::string number);
        void displayDouble(std::string number);
        void nanOrInfCase(std::string number);

        Conversor &operator=( Conversor const &assig);
};

#endif
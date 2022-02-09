#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Replace
{
    std::string     _filename;
    std::string     _s1;
    std::string     _s2;
    std::fstream    _file;

    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();

        void insertRow();
        std::string replaceRow(std::string row);
};

#endif
#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
    this->_file.open(_filename, std::fstream::in);
}
Replace::~Replace(void)
{
    this->_file.close();
}

std::string Replace::replaceRow(std::string row)
{
    std::string newLine;
    size_t pos;
    size_t start;
    size_t end;

    start = row.find(this->_s1);
    pos = 0;
    while (start != row.npos)
    {
        end = start + this->_s1.size();
        newLine += (row.substr(pos, start) + this->_s2);
        pos += end;
        start = row.substr(pos).find(this->_s1);
    }
    newLine += row.substr(pos);
    if (!newLine.size())
        return (row);
    return (newLine);
}

void Replace::insertRow()
{
    std::fstream    infile(this->_filename);
    std::fstream    outfile;
    std::string     row;

    outfile.open(this->_filename + ".replace", std::fstream::out);
    while (std::getline(infile, row))
        outfile << replaceRow(row) << std::endl;
}

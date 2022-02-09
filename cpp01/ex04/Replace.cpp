#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
    this->_file.open(_filename, std::fstream::in);
}
Replace::~Replace(void)
{
    this->_file.close();
}
void Replace::insertRow()
{
    std::fstream    outfile;
    std::string     row;
    std::string     newRow;

    outfile.open(_filename + ".replace", std::fstream::out);
    while (std::getline(this->_file, row))
    {
        if (row.find(this->_s1))
        {
            newRow = Replace::replaceRow(row);
            outfile << newRow << std::endl;
        }
        else
            outfile << row << std::endl;
    }
}
std::string Replace::replaceRow(std::string row)
{
    std::string replacedRow;
    size_t pos;

    pos = 0;
    replacedRow = row.substr(pos, row.find(this->_s1));

    while((pos = row.find(this->_s1, pos)) != std::string::npos) //!!!!
    {
        replacedRow += this->_s2;
        pos += this->_s1.length();
        replacedRow += row.substr(pos, row.find(this->_s1));
    }
    return (replacedRow);
}

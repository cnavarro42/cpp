#include "span.hpp"

span::span(unsigned int N) : _boxes(N)
{
    _integers.reserve(N);
        for (size_t i = 0; i < this->_integers.size(); i++)
        std::cout << this->_integers[i] << std::endl;
}

span::~span()
{
}

span::span( span const &copy)
{
    this->_integers.reserve(copy._integers.max_size());
    for (size_t i = 0; i < this->_integers.max_size(); i++)
        std::cout << this->_integers[i];
}

span &span::operator=( span const &assig)
{
    this->_integers = assig._integers;
    return *this;
}


void span::addNumber(int number)
{
    if (this->_integers.size() < this->_boxes)
        _integers.push_back(number);
    else
        throw span::NoMoreEspaceError();
}

void span::printIntegers() const
{
    for (size_t i = 0; i < this->_integers.size(); i++)
        std::cout << this->_integers[i] << " ";
    std::cout << std::endl;
}

bool    span::canISpan() const
{
    if (this->_integers.size() < 2)
        throw span::NoSpanToFind();
    return (true);
}

int span::shortestSpan()
{
    int ret;

    ret = INT32_MAX;
    if (this->canISpan())
        std::sort(this->_integers.begin(), this->_integers.end());
    std::vector<const int>::iterator first = this->_integers.begin();
    std::vector<const int>::iterator second = this->_integers.begin() + 1;
    while (second != this->_integers.end())
    {
        if (*second - *first < ret)
            ret = *(first + 1) - *first;
        first++;
        second++;
    }
    return (ret);
}

int span::longestSpan()
{
    int ret;

    ret = INT32_MIN;
    if (this->canISpan())
        std::sort(this->_integers.begin(), this->_integers.end());
    std::vector<const int>::iterator first = this->_integers.begin();
    std::vector<const int>::iterator second = this->_integers.begin() + 1;
    while (second != this->_integers.end())
    {
        if (*second - *first > ret)
            ret = *(first + 1) - *first;
        first++;
        second++;
    }
    return (ret);
}

unsigned int span::getSize()
{
    return (this->_boxes);
}
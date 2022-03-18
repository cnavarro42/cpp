#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class span
{
        std::vector<int>    _integers;
        unsigned int        _boxes;
        bool    canISpan() const;
    public:
        span(unsigned int N);
        span( span const &copy);
        ~span();

        void    addNumber(int number);
        span    &operator=( span const &assig);
        void    printIntegers() const;
        int     shortestSpan();
        int     longestSpan();
        unsigned int    getSize();


        class NoMoreEspaceError: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "There is no more space";
            }
        };

        class NoSpanToFind: public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Not enough integers";
            }
        };
};

#endif
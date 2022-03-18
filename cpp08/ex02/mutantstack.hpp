#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(void) : std::stack<T>()
        {
        }
        MutantStack( MutantStack const &copy)
        {
            *this = copy;
        }
        ~MutantStack()
        {

        }
        MutantStack &operator=( MutantStack const &assig)
        {
            std::stack<T>::operator=(assig);
            return *this;
        }

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin()            { return (std::stack<T>::c.begin());  }
        reverse_iterator rbegin()   { return (std::stack<T>::c.rbegin()); }
        iterator end()              { return (std::stack<T>::c.end());    }
        reverse_iterator rend()     { return (std::stack<T>::c.rend());   }

        iterator begin() const          { return (std::stack<T>::c.begin());  }
        reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
        iterator end() const            { return (std::stack<T>::c.end());    }
        reverse_iterator rend() const   { return (std::stack<T>::c.rend());   }
};

#endif
# include <iostream>

template<typename T>
class Array
{
    T       *_array;
    public:
        Array() : _array(new T[0])
        {
            this->_array[0] = 0;
        }
        Array(unsigned int n) : _array(new T[n + 1])
        {
            this->_array[n] = 0;
        }
        ~Array()
        {
            delete [] this->_array;
        }
        Array( Array const &copy)
        {
            this->_array = copy._array;
            for ( int i = 0; i < Array::size(); i++)
                this->_array[i] = copy._array[i];
        }

        Array &operator=( Array const &assig)
        {
            for ( int i = 0; i < Array::size(); i++)
                this->_array[i] = assig._array[i];
            return *this;
        }

        T   &operator[](int pos)
        {
            if (pos > Array::size() || pos < 0)
                throw Exception();
                return this->_array[pos];
        }

        int size() const
        {
            int i;

            i = 0;
            while (this->_array[i++] != 0);
            return (i);
        }

        class	Exception : public std::exception
		{
			virtual const char * what() const throw()
			{
				return "Position not allocated";
			}
		};
};
#include "mutantstack.hpp"
#include <stack>
#include <list>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "last is " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "size is: " << mstack.size() << std::endl;


    std::cout << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << std::endl;
/////////////////////////////////////////////////////////////
    std::cout << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

    while (rit != rite)
	{
        std::cout << *rit << std::endl;
		rit++;
	}
    return 0;
}

//int main()
//{
//    std::list<int> mstack;
//
//    mstack.push_back(5);
//    mstack.push_back(17);
//
//    std::cout << mstack.back() << std::endl;
//
//    mstack.pop_back();
//
//    std::cout << mstack.size() << std::endl;
//
//    mstack.push_back(3);
//    mstack.push_back(5);
//    mstack.push_back(737);
//    //[...]
//    mstack.push_back(0);
//
//    std::list<int>::iterator it = mstack.begin();
//    std::list<int>::iterator ite = mstack.end();
//
//    ++it;
//    --it;
//
//    while (it != ite)
//    {
//        std::cout << *it << std::endl;
//        ++it;
//    }
//    std::list<int> s(mstack);
//    return 0;
//}

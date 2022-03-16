#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

void identify(Base* p)
{
    if (!p)
		return ;
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B b = dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C b = dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << "error" << std::endl;
            }
        }
    }
}

Base *generate()
{
    srand(time(NULL));
    int random;
    Base *ret = NULL;
    random = rand() % 3 + 1;

    switch (random)
    {
    case 1:
        ret = new A();
        break;
    case 2:
        ret = new B();
        break;
    case 3:
        ret = new C();
        break;
    default:
        break;
    }

    return (ret);
}

int main()
{
    Base *base;
    base = generate();

    identify(base);
    identify(*base);

    delete base;
}
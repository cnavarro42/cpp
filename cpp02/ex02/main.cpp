#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed d;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const c( Fixed( 4.05f ) * Fixed( 3 ) );
    Fixed x(b);
    Fixed y = c;

    std::cout << "show a:" << std::endl;
    std::cout << a << std::endl;
    std::cout << "show ++a:" << std::endl;
    std::cout << ++a << std::endl;
    std::cout << "after ++a:" << std::endl;
    std::cout << a << std::endl;
    std::cout << "show a++:" << std::endl;
    std::cout << a++ << std::endl;
    std::cout << "after a++:" << std::endl;
    std::cout << a << std::endl;
    std::cout << "show b:" << std::endl;
    std::cout << b << std::endl;
    std::cout << "Máximo entre a y b" << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << "<<<<More tryies>>>>>" << std::endl;
    std::cout << "show b:" << std::endl;
    std::cout << b << std::endl;
    std::cout << "show c:" << std::endl;
    std::cout << c << std::endl;
    std::cout << "b Mayor que c?" << std::endl;
    std::cout << (b > c) << std::endl;
    std::cout << "b Menor que c?" << std::endl;
    std::cout << (b < c) << std::endl;
    std::cout << "b Mayor o igual que b?" << std::endl;
    std::cout << (b >= b) << std::endl;
    std::cout << "b igual que c?" << std::endl;
    std::cout << (b == c) << std::endl;
    std::cout << "b igual que b?" << std::endl;
    std::cout << (b == b) << std::endl;
    std::cout << "b * c" << std::endl;
    d = x * y;
    std::cout << d << std::endl;
    return 0;
}
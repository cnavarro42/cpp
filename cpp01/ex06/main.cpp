#include "Karen.hpp"

int error_exit( void )
{
    std::cout << "It's like she is saying nothing, or maybe too many things" << std::endl;
    return (1);
}

int	main(int argc, char **argv)
{
	Karen	karen;
    
    if (argc != 2)
        return (error_exit());
	karen.complain(argv[1]);
}

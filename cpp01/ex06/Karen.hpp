#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void insignificant(void);
    int select_number(std:: string level);

    public:
        Karen();
        ~Karen();

    void complain(std::string level);
    
};

#endif
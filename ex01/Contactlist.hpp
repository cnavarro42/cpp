#ifndef CONTACTLIST_HPP
# define CONTACTLIST_HPP

#include "Contact.hpp"
#include <iomanip>


class Contactlist
{
		Contact spaceContact [8];
		int	pos;
		int len;
	public:
		Contactlist();
		~Contactlist();
		void contactAdd(void);
		void searchCowboys(void);
		void printRow(std::string row);

	//GETTER
		int getLen(void);
};
#endif
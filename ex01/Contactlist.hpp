#ifndef CONTACTLIST_HPP
# define CONTACTLIST_HPP

#include "Contact.hpp"

class Contactlist
{
		Contact spaceContact [8];
		int	pos;
		int len;
	public:
		Contactlist();
		~Contactlist();
		void contactAdd(void);
		void searchCowboys(int len);

	//GETTER
		int getLen(void);
};
#endif
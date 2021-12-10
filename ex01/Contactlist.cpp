#include "Contactlist.hpp"

Contactlist::Contactlist(void)
{
	this->pos = 0;
	this->len = 0;
}

Contactlist::~Contactlist()
{
}

void Contactlist::contactAdd(void)
{
	this->spaceContact[this->pos].fillContact();
	this->pos++;
	if (this->pos == 8)
		this->pos = 0;
	if (this->len < 8)
		this->len++;
}

int Contactlist::getLen(void)
{
	return (this->len);
}

void Contactlist::searchCowboys(void)
{
	std::cout << 
	for (int i = 0; i < this->len; i++) {
		
	}
}
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
	system("clear");
	std::cout << "|     index|first name| last name|  nickname|" << std::endl << std::endl;
	for (int i = 0; i < this->len; i++) {
		std::cout << "|" << std::setw(10) << i;
		printRow(this->spaceContact[i].get_firstName());
		printRow(this->spaceContact[i].get_lastName());
		printRow(this->spaceContact[i].get_nickname());
		std::cout << "|" << std::endl;
	
	}
}

void Contactlist::printRow(std::string row)
{
	if (row.length() <= 10)
		std::cout << "|" << std::setw(10) << row;
	else
		std::cout << "|" << row.substr(0,9) << ".";
}
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
	std::string index;
	std::cout << "# |     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl << std::endl;
	for (int i = 0; i < this->len; i++) {
		std::cout << "# |" << std::setw(10) << i;
		printRow(this->spaceContact[i].get_firstName());
		printRow(this->spaceContact[i].get_lastName());
		printRow(this->spaceContact[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "# | SELECT THE INDEX NUMBER FOR MORE INFO" << std::endl;
	std::getline(std::cin, index);
	if (index.length() == 1 && index[0] <= '9' && index[0] >= '0' && std::stoi(index) <  this->len)
	{
		std::cout << "INDEX: " << index << std::endl;
		std::cout << "FIRST NAME: " << this->spaceContact[std::stoi(index)].get_firstName() << std::endl;
		std::cout << "LAST NAME: " << this->spaceContact[std::stoi(index)].get_lastName() << std::endl;
		std::cout << "NICKNAME: " << this->spaceContact[std::stoi(index)].get_nickname() << std::endl;
		std::cout << "PHONE: " << this->spaceContact[std::stoi(index)].get_phone() << std::endl;
		std::cout << "DARKEST SECRET: " << this->spaceContact[std::stoi(index)].get_darkestSecret() << std::endl;
	}
	else
		std::cout << "NO VALID INDEX" << std::endl;
}

void Contactlist::printRow(std::string row)
{
	if (row.length() <= 10)
		std::cout << "|" << std::setw(10) << row;
	else
		std::cout << "|" << row.substr(0,9) << ".";
}

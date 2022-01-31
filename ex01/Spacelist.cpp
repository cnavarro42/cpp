#include <iostream>
#include "Contactlist.hpp"

void printWelcome(void)
{
	std::cout << "WELCOME TO YOUR SPACE LIST!!" << std::endl << std::endl;
}

void printRequest(void)
{
	std::cout << "PLEASE, TYPE YOUR REQUEST:" << std::endl;
	std::cout << "(ADD/SEARCH/EXIT)" << std::endl;
	std::cout << "# ";
}

void addContact(Contactlist &spacelist)
{
	spacelist.contactAdd();
}

void displayList(Contactlist &spacelist)
{
	if (spacelist.getLen() == 0)
	{
		std::cout << "THERE IS NO SPACE COWBOYS IN THE SPACELIST" << std::endl;
		std::cout << std::endl;
	}
	else
		spacelist.searchCowboys();
}

int main(void)
{
	std::string request;
	Contactlist spacelist;

	printWelcome();
	printRequest();
	while (std::getline(std::cin, request)) {
		if (!(request.compare("ADD")))
			addContact(spacelist);
		else if (!(request.compare("SEARCH")))
			displayList(spacelist);
		else if (!(request.compare("EXIT")))
			break;
		std::cout << std::endl;
		printRequest();
	}
	std::cout << "SEE YOU, SPACE COWBOY" << std::endl;
	return (0);
}

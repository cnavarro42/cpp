#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::fillContact()
{
	std::string filling;

	std::cout << "Introduce First Name:" << std::endl << "# ";
	std::getline(std::cin, filling);
	set_firstName(filling);

	std::cout << "Introduce Last Name:" << std::endl << "# ";
	std::getline(std::cin, filling);
	set_lastName(filling);

	std::cout << "Introduce your Nickname:" << std::endl << "# ";
	std::getline(std::cin, filling);
	set_nickname(filling);

	std::cout << "Introduce the Phone Number:" << std::endl << "# ";
	std::getline(std::cin, filling);
	set_phone(filling);

	std::cout << "Introduce your Darkest Secret:" << std::endl << "# ";
	std::getline(std::cin, filling);
	set_darkestSecret(filling);
}

// SETTERS

void Contact::set_firstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::set_lastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_phone(std::string phone)
{
	this->phone = phone;
}

void Contact ::set_darkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

// GETTERS

std::string Contact::get_firstName(void)
{
	return (this->firstName);
}

std::string Contact::get_lastName(void)
{
	return (this->lastName);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_phone(void)
{
	return (this->phone);
}

std::string Contact::get_darkestSecret(void)
{
	return (this->darkestSecret);
}
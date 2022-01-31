#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phone;
		std::string darkestSecret;

	public:
		Contact();
		~Contact();

		void fillContact();
		
		// SETTERS

		void set_firstName(std::string firstName);
		void set_lastName(std::string lastName);
		void set_nickname(std::string nickname);
		void set_phone(std::string phone);
		void set_darkestSecret(std::string darkestSecret);

		// GETTERS

		std::string get_firstName(void);
		std::string get_lastName(void);
		std::string get_nickname(void);
		std::string get_phone(void);
		std::string get_darkestSecret(void);
};

#endif
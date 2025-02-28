#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
	private:
			std::string		first_name;
			std::string		last_name;
			std::string		nick_name;
			std::string		phone_numbers;
			std::string		darkest_secret;
	public:
			void			FillContact(std::string &str, std::string parameter);
			void			PrintContact(void);
			void			CheckStringIsEmpty(std::string &str, std::string parameter);
			void			Setters(std::string s, int i);
			std::string		Getters(void);
};

std::string	prompt(std::string prompt);

#endif
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
			std::string 	_parameter[5];
			std::string 	_info[5];
			std::string 	_whitespaces;
	public:
			Contact(void);
			~Contact(void);

			std::string		getPhoneNumber(void);
			std::string 	getWhitespaces(void);
			std::string 	getFirstName(void);
			std::string 	getLastName(void);
			std::string 	getNickName(void);
			std::string 	getDarkestSecret(void);

			void			setFirstName(std::string str);
			void			setLastName(std::string str);
			void			setNickName(std::string str);
			void			setPhoneNumber(std::string str);
			void			setDarkestSecret(std::string str);
	public:
			void			fillContact(void);
			void			printContact(Contact &contact);
			bool			contactIsEmpty(Contact &contact);
			void			printString(std::string str);
		};
		
		bool 			numIsValid(std::string str);
		std::string		deleteWhiteSpace(std::string input, std::string whiteSpace);
		std::string		getInput(std::string parameter, std::string whitespace);
		std::string		getInputPhoneNumber(std::string parameter);
		std::string		getInputIndex(std::string parameter);
		bool			indexIsValid(std::string str);

#endif
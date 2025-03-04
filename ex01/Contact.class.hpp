#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Utils{}

class Contact
{
	private:
			bool			_status;
			int				_phoneNumber;
			std::string		_firstName;
			std::string		_lastName;
			std::string		_nickName;
			std::string		_darkestSecret;
			std::string 	_parameter[5];
			std::string 	_whitespaces;
	public:
			Contact(void);
			~Contact(void);
			int				getPhoneNumber(void);
			bool			getStatus(void);
			std::string 	getWhitespaces(void);
			std::string 	getFirstName(void);
			std::string 	getLastName(void);
			std::string 	getNickName(void);
			std::string 	getDarkestSecret(void);
			void			setFirstName(std::string str);
			void			setLastName(std::string str);
			void			setNickName(std::string str);
			void			setDarkestSecret(std::string str);

			
			void			setStatus(bool status);
			void			fillContact(void);
		};
		
		bool 			numIsValid(std::string str);
		std::string		deleteWhiteSpace(std::string input, std::string whiteSpace);
		std::string		getInput(std::string parameter);

#endif

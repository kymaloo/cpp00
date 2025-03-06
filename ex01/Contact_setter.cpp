#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	_info[0] = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setLastName(std::string str)
{
	_info[1] = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setNickName(std::string str)
{
	_info[2] = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setPhoneNumber(std::string str)
{
	_info[3] = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	_info[4] = deleteWhiteSpace(str, _whitespaces);
}

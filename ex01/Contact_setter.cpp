#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	//_firstName.clear();
	_info[0] = deleteWhiteSpace(str, _whitespaces);
	//_info[0] = _firstName;
}

void	Contact::setLastName(std::string str)
{
	//_lastName.clear();
	_info[1] = deleteWhiteSpace(str, _whitespaces);
	//_info[1] = _lastName;
}

void	Contact::setNickName(std::string str)
{
	//_nickName.clear();
	_info[2] = deleteWhiteSpace(str, _whitespaces);
	//_info[2] = _nickName;
}

void	Contact::setPhoneNumber(std::string str)
{
//	_phoneNumber.clear();
	_info[3] = str;
	//_info[3] = _phoneNumber;
}

void	Contact::setDarkestSecret(std::string str)
{
	//_darkestSecret.clear();
	_info[4] = deleteWhiteSpace(str, _whitespaces);
	//_info[4] = _darkestSecret;
}

#include "Contact.hpp"

std::string	Contact::getWhitespaces(void)
{
	return (_whitespaces);
}

std::string	Contact::getFirstName(void)
{
	return (_info[0]);
}

std::string	Contact::getLastName(void)
{
	return (_info[1]);
}

std::string	Contact::getNickName(void)
{
	return (_info[2]);
}

std::string	Contact::getPhoneNumber(void)
{
	return (_info[3]);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_info[4]);
}

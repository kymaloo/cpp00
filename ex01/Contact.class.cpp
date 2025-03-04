/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:41:15 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/04 17:55:13 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string	getInput(std::string parameter)
{
	std::string input;

	input.clear();
	while (input.empty())
    {
    	std::cout << parameter << std::endl;
    	std::getline(std::cin, input);
    	if (std::cin.eof())
        	return ;
	}
	return (input);
}

void	Contact::setFirstName(std::string str)
{
	_firstName = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setLastName(std::string str)
{
	_lastName = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setNickName(std::string str)
{
	_nickName = deleteWhiteSpace(str, _whitespaces);
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = deleteWhiteSpace(str, _whitespaces);
}

void Contact::fillContact(void)
{
	setFirstName(getInput(_parameter[0]));
	setLastName(getInput(_parameter[1]));
	setNickName(getInput(_parameter[2]));
	setDarkestSecret(getInput(_parameter[4]));
}

std::string	deleteWhiteSpace(std::string input, std::string whiteSpace)
{
	std::size_t found;

	found = input.find_first_of(whiteSpace);
  	while (found != std::string::npos)
  	{
    	input.erase(found, 1);
    	found = input.find_first_of(whiteSpace);
  	}
	return (input);
}

bool numIsValid(std::string str)
{
    if (str.length() != 10)
        return (false);
    for (size_t i = 0; i < str.length(); i++)
	{
        if (!std::isdigit(str[i]))
            return (false);
    }
    if (str[0] != '0')
        return (false);
    return (true);
}

Contact::Contact(void)
{
	std::cout << "The constuctor Contact is called" << std::endl;
	_parameter[0] = "First name: ";
	_parameter[1] = "Last name: ";
	_parameter[2] = "Nick name: ";
	_parameter[3] = "Phone number: ";
	_parameter[4] = "Darkest secret: ";
	_whitespaces = " \t\f\v\n\r";
	_status = false;
}

Contact::~Contact(void)
{
	std::cout << "The destructor Contact is called" << std::endl;
}

void	Contact::setStatus(bool status)
{
	_status = status;
}

bool	Contact::getStatus(void)
{
	return (_status);
}

std::string	Contact::getWhitespaces(void)
{
	return (_whitespaces);
}

std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

std::string	Contact::getNickName(void)
{
	return (_nickName);
}

int	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}

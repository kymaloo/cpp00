/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:41:15 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/06 16:15:05 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::printContact(Contact &contact)
{
	for (int i = 0; i < 5; i++)
	{
		if (contactIsEmpty(contact) == true)
		{
			std::cout << "This contact isn't reel\n";
			break ;
		}
		std::cout << contact._parameter[i] << contact._info[i] << std::endl;
	}
}

std::string	getInput(std::string parameter, std::string whitespace)
{
	std::string input;

	input.clear();
	while (input.empty())
    {
    	std::cout << parameter << std::endl;
    	std::getline(std::cin, input);
		input = deleteWhiteSpace(input, whitespace);
    	if (std::cin.eof())
        	return ("");
	}
	return (input);
}

std::string	getInputPhoneNumber(std::string parameter)
{
	std::string input;
	bool		status;

	status = false;
	input.clear();
	while (input.empty() || status == false)
    {
    	std::cout << parameter << std::endl;
    	std::getline(std::cin, input);
		status = numIsValid(input);
    	if (std::cin.eof())
			return ("");
	}
	return (input);
}

std::string	getInputIndex(std::string parameter)
{
	std::string input;
	bool		status;

	status = false;
	input.clear();
	while (input.empty() || status == false)
    {
    	std::cout << parameter << std::endl;
    	std::getline(std::cin, input);
		status = indexIsValid(input);
    	if (std::cin.eof())
			return ("");
	}
	return (input);
}

void Contact::fillContact(void)
{
	setFirstName(getInput(_parameter[0], _whitespaces));
	setLastName(getInput(_parameter[1], _whitespaces));
	setNickName(getInput(_parameter[2], _whitespaces));
	setPhoneNumber(getInputPhoneNumber(_parameter[3]));
	setDarkestSecret(getInput(_parameter[4], _whitespaces));
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
	std::cout << "JE SUIS CONSTRUIT" << std::endl;
	_parameter[0] = "First name: ";
	_parameter[1] = "Last name: ";
	_parameter[2] = "Nick name: ";
	_parameter[3] = "Phone number: ";
	_parameter[4] = "Darkest secret: ";
	_whitespaces = " \t\f\v\n\r";
}

Contact::~Contact(void)
{
	std::cout << "The destructor Contact is called" << std::endl;
}

bool	Contact::contactIsEmpty(Contact &contact)
{
	if (contact._info[0].empty())
		return (true);
	return (false);
}

void	Contact::printString(std::string str)
{
	size_t	size;
	std::string	result;

	result = str;
	size = str.size();
	if (size == 10)
		std::cout << result;
	if (size < 10)
	{
		std::cout << std::setw(10);
		std::cout << result;
	}
	if (size > 10)
	{
		result = str.substr(0, 9);
		std::cout << result << ".";
	}
}

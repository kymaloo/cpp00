/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:44:17 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/05 18:08:16 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	if (_i > 7)
		_i = 0;
	_contact[_i].fillContact();
	_i++;
}

void	PhoneBook::search(void)
{
	int			i;
	bool		status;

	i = 0;
	status = _contact[i].contactIsEmpty(_contact[i]);
	if (status == true)
	{
		std::cout << "The list of contact is empty\n";
		return ;
	}
	std::cout << "_____________________________________________\n";
	std::cout << "|     index|first name| last name| nick name|\n";
	std::cout << "|__________|__________|__________|__________|\n";
	while (status != true)
	{
		status = _contact[i].contactIsEmpty(_contact[i]);
		//std::cout << "|" << 
	}
	std::stringstream(getInputIndex("Choose your contact : ")) >> i;
	_contact[i].printContact(_contact[i]);
}

int	PhoneBook::exit(std::string message)
{
	std::cout << message << "\n";
	return (0);
}

PhoneBook::PhoneBook(void)
{
	_i = 0;
	std::cout << "The constuctor PhoneBook is called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "The destuctor PhoneBook is called" << std::endl;
}

bool indexIsValid(std::string str)
{
    if (str.length() != 1)
        return (false);
    if (str[0] < '0' || str[0] >= '8')
        return (false);
    return (true);
}


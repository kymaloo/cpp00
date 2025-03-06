/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:44:17 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/06 16:21:15 by trgaspar         ###   ########.fr       */
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
	std::cout << "---------------------------------------------\n";
	std::cout << "|     index|first name| last name| nick name|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	while (status != true)
	{
		status = _contact[i].contactIsEmpty(_contact[i]);
		initSearch(i);
		std::cout << "|         " << i << "|";
		_contact[i].printString(_search[0]);
		std::cout << "|";
		_contact[i].printString(_search[1]);
		std::cout << "|";
		_contact[i].printString(_search[2]);
		std::cout << "|\n";
		i++;
		status = _contact[i].contactIsEmpty(_contact[i]);
	}
	std::cout << "|-------------------------------------------|\n";
	printContactWithIndex();
}

void	PhoneBook::initSearch(int i)
{
	_search[0] = _contact[i].getFirstName();
	_search[1] = _contact[i].getLastName();
	_search[2] = _contact[i].getNickName();
}

void	PhoneBook::printContactWithIndex(void)
{
	int	i;

	i = 0;
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


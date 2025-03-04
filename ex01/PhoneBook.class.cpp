/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:44:17 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/04 17:18:27 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::add(void)
{
	Contact contact;
	if (_i > 8)
		_i = 0;
	contact = getContact(_i);
	contact.fillContact();
	//contact.printContact();
	_i++;
}

// void	PhoneBook::search(void)
// {
	
// }

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

Contact PhoneBook::getContact(int i)
{
	if (i < 0 || i > 7)
		return (Contact());
	return (_contact[i]);
}

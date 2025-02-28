/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:44:17 by trgaspar          #+#    #+#             */
/*   Updated: 2025/02/28 17:10:31 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::add(void)
{
	if (i > 8)
		i = 0;
	contact[i].FillContact(contact[i].first_name, "First name : ");
	contact[i].Setters(contact[i].first_name, 0); 
	// contact[i].FillContact(contact[i].last_name, "Last name : ");
	// contact[i].FillContact(contact[i].nick_name, "Nick name : ");
	// contact[i].FillContact(contact[i].phone_numbers, "Phone numbers : ");
	// contact[i].FillContact(contact[i].darkest_secret, "Darkest secret : ");
	contact[i].PrintContact();
	i++;
}

// void	PhoneBook::search(void)
// {
	
// }
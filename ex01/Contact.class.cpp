/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 02:41:15 by trgaspar          #+#    #+#             */
/*   Updated: 2025/02/28 17:10:01 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	Contact::PrintContact(void)
{
	std::cout << first_name << std::endl;
	std::cout << last_name << std::endl;
	std::cout << nick_name << std::endl;
	std::cout << phone_numbers << std::endl;
	std::cout << darkest_secret << std::endl;
}

void Contact::FillContact(std::string &str, std::string parameter)
{
    std::string tmp;

    std::cout << parameter << std::endl;
    std::getline(std::cin, tmp);
    if (std::cin.eof())
        return;
    CheckStringIsEmpty(tmp, parameter);
    str = tmp;
}

void Contact::CheckStringIsEmpty(std::string &str, std::string parameter)
{
    while (str.empty())
    {
        std::cout << "Please enter your " << parameter << std::endl;
        std::getline(std::cin, str);
        if (std::cin.eof())
            return;
    }
}

void Contact::Setters(std::string s, int i)
{
	if (i == 0)
		first_name = s;
	if (i == 1)
		last_name = s;
	if (i == 2)
		nick_name = s;
	if (i == 0)
		phone_numbers = s;
	if (i == 0)
		darkest_secret = s;
}

std::string Contact::Getters(void)
{
	return (first_name);
}

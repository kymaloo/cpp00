/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:08:13 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/06 16:21:08 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

int	PhoneBook::start(void)
{
	std::string	str;

	str.clear();
	while (1)
	{
		std::cout << "PhoneBook => ";
    	std::getline(std::cin, str);
		if (std::cin.eof())
			return (1);
		else if (str == "ADD")
			add();
		else if(str == "SEARCH")
			search();
		else if (str == "EXIT")
			return (exit("Bye bye PhoneBook"));
	}
	return (EXIT_FAILURE);
}

int	main(void)
{
	PhoneBook	pb;
	int			error;

	error = pb.start();
	return (error);
}

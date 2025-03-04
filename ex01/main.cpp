/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:08:13 by trgaspar          #+#    #+#             */
/*   Updated: 2025/03/04 16:31:02 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
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
		// else if(str == "SEARCH")
		// 	search();
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

// ? Verifier si les string recu ne sont pas NULL
// ? Skip les whites spaces

// ?  SEARCH : affiche le contact demandé

// ? Step 1 : Afficher les contact en colonnes (index, nom, prenom, pseudo)

// ? Step 2 : Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
// ?		  par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
// ?		  de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par un point (’.’).

// ? Step 3 : Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à af-
// ? 		  ficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
// ?		  Sinon, affichez les informations du contact, une par ligne.

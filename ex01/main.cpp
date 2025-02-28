/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 04:08:13 by trgaspar          #+#    #+#             */
/*   Updated: 2025/02/28 12:05:57 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <cstdlib>

std::string	prompt(std::string prompt)
{
	std::string cmd;

	std::cout << prompt;
	while (std::getline(std::cin, cmd))
	{
		if (cmd.empty())
			return (" ");
		else
			return (cmd);
	}
	return (exit(1), " ");
}

int	main(void)
{
	PhoneBook	pb;
	std::string	str;

	pb.i = 0;
	str = prompt("PhoneBook => ");
	while (str != "EXIT" && !str.empty())
	{
		
		if (str == "ADD")
			pb.add();
		// else (str == "SEARCH")
		// 	pb.search();
		else if (str == "EXIT")
			return (0);
		str = prompt("PhoneBook => ");
	}
	return (0);
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


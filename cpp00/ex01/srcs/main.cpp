/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:17:16 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 15:14:04 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Repertory.hpp"

int	main(void)
{
	PhoneBook	annuaire;
	std::string	line;

	annuaire.DisplayStart();
	std::cout << "$> ";
	while (std::getline(std::cin, line))
	{
		if (line == "ADD")
			annuaire.AddContact();
		else if (line == "SEARCH")
			annuaire.SearchContact();
		else if (line == "EXIT")
		{
			std::cout << "Fin de l'annuaire" << std::endl;
			return (0);
		}
		std::cout << "$> ";
	}
	return (1);
}
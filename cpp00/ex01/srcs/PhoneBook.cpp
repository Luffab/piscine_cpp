/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:27:33 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 13:44:11 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Repertory.hpp"

PhoneBook::PhoneBook()
{
	this->nb = 0;
	this->nb_ind = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::AddContact()
{
	if (this->nb == 8)
	{
		if (this->nb_ind == 8)
			this->nb_ind = 0;
		this->users[this->nb_ind].SetAllInfo(this->nb_ind + 1);
		this->nb_ind++;
	}
	else
	{
		this->users[this->nb].SetAllInfo(this->nb + 1);
		this->nb++;
	}
}

void	PhoneBook::SearchContact()
{
	std::string	line;

	if (this->nb == 0)
		std::cout << "Aucun contact" << std::endl;
	else
	{
		this->ShowSearch();
		std::cout << "Entrez l'index du contact: ";
		while (std::getline(std::cin, line) && (line[0] <= '0' || line[0] > this->nb + 48 || line.length() > 1))
		{
			if (line[0] <= '0' || line[0] > this->nb + 48 || line.length() > 1)
				std::cout << "Index invalide" << std::endl;
			std::cout << "Entrez l'index du contact: ";
		}
		if (line[0] > '0')
			this->users[(line[0] - 48) - 1].DisplayUser();
	}
}

void	PhoneBook::ShowSearch()
{
	int	i;

	i = -1;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	while (++i < this->nb)
		this->users[i].DisplayInfos();
	std::cout << " -------------------------------------------" << std::endl;
}

void	PhoneBook::DisplayStart()
{
	std::cout << " ----------------------------------------" << std::endl;
	std::cout << "|          MY AWESOME PHONEBOOK          |" << std::endl;
	std::cout << " ----------------------------------------" << std::endl;
	std::cout << "Entrez ADD, SEARCH OU EXIT" << std::endl;
}
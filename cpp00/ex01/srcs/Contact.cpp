/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:56:21 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/15 15:58:55 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Repertory.hpp"

std::string	Contact::fields[5] = {
	"First Name",
	"Last name", 
	"Nickname",
	"Phone",
	"Darkest Secret"
};

Contact::Contact()
{
	int	i;

	i = -1;
	while (++i < 5)
		this->infos[i] = std::string();
}

Contact::~Contact()
{
}

void	Contact::SetAllInfo(int ind)
{
	int	i;

	i = 0;
	this->index = ind;
	while (i < 5)
	{
		std::cout << this->fields[i] << ": ";
		std::getline(std::cin, this->infos[i]);
		i++;
	}
	std::cout << "Contact added !" << std::endl;
}

void	Contact::DisplayInfos()
{
	int	i;

	i = 0;
	std::cout << "|" << std::setw(10) << this->index;
	while (i < 3)
	{
		std::cout << "|";
		if (this->infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << this->infos[i];
		i++;
	}
	std::cout << "|" << std::endl;
}

void	Contact::DisplayUser()
{
	int i;

	i = 0;
	std::cout << "-----" << std::endl;
	std::cout << "Contact[" << this->index << "]" << std::endl;
	while (i < 5)
	{
		std::cout << this->fields[i] << ": ";
		std::cout << this->infos[i]<< std::endl;
		i++;
	}
	std::cout << "-----" << std::endl;
}
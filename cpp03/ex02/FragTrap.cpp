/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:06:46 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 18:40:06 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->pv = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->pv = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& source)
{
	*this = source;
}

FragTrap&	FragTrap::operator=(const FragTrap&)
{
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::string	line;

	while (line != "yes" && line != "no")
	{
		std::cout << "Do you want to High Five ? (Enter yes or no): ";
		std::getline(std::cin, line);
		if (line == "yes")
			std::cout << "HIGH FIVE" << std::endl;
		else if (line == "no")
			std::cout << "Toi un jour je te crame ta famille toi" << std::endl;
		else
			std::cout << "Faut entrer 'yes' ou 'no' frero" << std::endl;
	}
}
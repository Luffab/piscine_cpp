/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:31:26 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 17:59:22 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->pv = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->pv = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source)
{
	*this = source;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy <=0 || this->pv <= 0)
		std::cout << "ScavTrap " << this->name << " can't attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attaque " << target << ", causant " << this->damage << " points de degats" << std::endl;
		this->energy--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap est entré en mode Gate Keeper" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap&)
{
	return (*this);
}
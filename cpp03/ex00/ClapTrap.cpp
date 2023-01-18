/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:33:21 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 18:44:11 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), pv(10), energy(10), damage(0)
{
	std::cout << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy <=0 || this->pv <= 0)
		std::cout << "ClapTrap " << this->name << " can't attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " points of damage" << std::endl;
		this->energy--;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy <=0 || this->pv <= 0)
		std::cout << "ClapTrap " << this->name << " can't be repaired" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " recover " << amount << " hit points" << std::endl;
		this->energy--;
		this->pv += amount;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->pv <= 0)
		std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage" << std::endl;
		this->pv -= amount;
	}
}

ClapTrap&	ClapTrap::operator=(const ClapTrap&)
{
	return (*this);
}


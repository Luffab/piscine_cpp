/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:49:05 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/19 16:00:59 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), arme(nullptr)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &arme)
{
	this->arme = &arme;
}

void	HumanB::attack()
{
	if (!this->arme)
		std::cout << this->name << " cant attack without weapon" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:42:30 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 13:49:22 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType()
{
	std::string	&str = this->type;
	return (str);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

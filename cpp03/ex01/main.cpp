/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:27:25 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 17:59:49 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Eren("Eren");
	ScavTrap	Luffy("Luffy");
	const std::string	target = "Goku";
	
	Luffy.guardGate();
	Eren.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(9);
	Luffy.takeDamage(100);
	Eren.beRepaired(1);
	Luffy.beRepaired(1);
	Eren.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(2);
	Luffy.takeDamage(1);
	Eren.attack(target);
	Luffy.attack(target);
	Luffy.guardGate();

	return (0);
}
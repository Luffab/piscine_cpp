/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:27:25 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 18:24:52 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Eren("Eren");
	ScavTrap	Luffy("Luffy");
	FragTrap	Mikasa("Mikasa");
	const std::string	target = "Goku";
	
	Luffy.guardGate();
	Eren.attack(target);
	Mikasa.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(9);
	Mikasa.takeDamage(50);
	Luffy.takeDamage(100);
	Eren.beRepaired(1);
	Mikasa.beRepaired(1);
	Mikasa.highFivesGuys();
	Luffy.beRepaired(1);
	Eren.attack(target);
	Mikasa.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(2);
	Luffy.takeDamage(1);
	Eren.attack(target);
	Luffy.attack(target);
	Luffy.guardGate();

	return (0);
}
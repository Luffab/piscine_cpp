/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:27:25 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/22 16:24:46 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Eren("Eren");
	ClapTrap	Luffy("Luffy");
	const std::string	target = "Goku";
	
	Eren.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(9);
	Luffy.takeDamage(9);
	Eren.beRepaired(1);
	Luffy.beRepaired(1);
	Eren.attack(target);
	Luffy.attack(target);
	Eren.takeDamage(2);
	Luffy.takeDamage(1);
	Eren.attack(target);
	Luffy.attack(target);

	return (0);
}
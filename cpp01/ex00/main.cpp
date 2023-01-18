/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:21:33 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/15 18:22:57 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Avec newZombie:" << std::endl;
	Zombie *Eren = newZombie("Eren Yaeger");
	Eren->announce();
	delete Eren;
	std::cout << "Avec fonction randomChump" << std::endl;
	randomChump("Luffy");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:21:33 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/15 18:24:11 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i;

	i = 0;
	Zombie *Didier = zombieHorde(15, "Didier");
	while (i < 15)
	{
		Didier[i].announce();
		i++;
	}
	delete [] Didier;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:09:28 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/24 17:08:04 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"
#include <iostream>

void	init_cast(t_cast *c)
{
	c->i = 0;
	c->d = 0;
	c->f = 0;
	c->c = 0;
	c->str = "";
	c->isnan = false;
	c->ischar = false;
}

int	main(int ac, char **av)
{
	t_cast c;
	
	if (ac != 2)
	{
		std::cout << "Un seul argument stp" << std::endl;
		return (1);
	}
	init_cast(&c);
	if (!isValid(av[1], &c))
	{
		std::cout << "Mauvais argument" << std::endl;
		return (1);
	}
	parseType(&c, av[1]);
	convertBaseType(&c, av[1]);
	convertAll(&c);
	printConvert(&c);
	return (0);
}

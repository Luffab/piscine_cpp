/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:09:45 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/19 18:02:57 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	Sed	sed;
	if (ac != 4)
	{
		std::cout << "Il faut un nom de fichier et deux strings" << std::endl;
		return (1);
	}
	if (!sed.setFile(av[1]))
		return (1);
	if (!sed.replace(av[2], av[3]))
		return (1);
	return (0);
}
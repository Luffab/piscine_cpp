/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:59:50 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/15 16:14:28 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_capitalize(std::string str)
{
	int		i;
	char	c;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 32;
			std::cout << c;
		}
		else
			std::cout << str[i];
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[++i])
		{
			ft_capitalize(av[i]);
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

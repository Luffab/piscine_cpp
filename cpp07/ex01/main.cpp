/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:52:23 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 16:20:14 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	static int	tab[] =
	{
		1,
		45,
		789,	
	};

	static	std::string	str[] =
	{
		"salut",
		"ca",
		"va",
		"frero"
	};

	::iter(tab, 3, ::printArray);
	std::cout << std::endl;
	::iter(str, 4, ::printArray);
	return (0);
}
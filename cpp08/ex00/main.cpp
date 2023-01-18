/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:49:53 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 18:02:13 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{
	int							i;
	std::vector<int>			vector;
	std::vector<int>::iterator	it;

	i = 0;
	while (i <= 78)
	{
		vector.push_back(i);
		i += 2;
	}
	try
	{
		it = easyfind(vector, 43);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Les problemes" << std::endl;
		(void)e;
	}
	try
	{
		it = easyfind(vector, 78);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Les problemes" << std::endl;
		(void)e;
	}
	return (0);
}
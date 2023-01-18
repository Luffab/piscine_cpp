/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:47:08 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 16:18:35 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	iter(T* array, int size, void(*f)(T))
{
	int	i;

	i = -1;
	while (++i < size)
		f(array[i]);
}

template<typename T>
void	printArray(T i)
{
	std::cout << i << std::endl;
}
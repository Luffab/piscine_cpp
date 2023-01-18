/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:35:53 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 18:00:26 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator	easyfind(T container, int nb)
{
	typename T::iterator	it;

	it = find(container.begin(), container.end(), nb);
	if (it == container.end())
		throw (std::exception());
	return (it);
}
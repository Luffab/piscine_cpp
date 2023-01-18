/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:22:53 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/04 13:52:20 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>

class	Array
{
	private:
		int	nb;
		T*	array;

	public:
		Array<T>(void): nb(0), array(NULL) {}

		Array<T>(unsigned int n)
		{
			if (static_cast<int>(n) < 0)
				n *= -1;
			this->array = new T[n];
			this->nb = n;
		}

		Array<T>(const Array<T>& source)
		{
			*this = source;
		}

		~Array<T>(void)
		{
			if (this->nb > 0)
				delete [] this->array;
		}

		Array<T>&	operator=(const Array<T>& source)
		{
			int	i;

			i = -1;
			if (this->nb > 0)
				delete [] this->array;
			this->nb = source.size();
			this->array = new T[this->nb];
			while (++i < this->nb)
				this->array[i] = source.array[i];
			return (*this);
		}

		T&	operator[](const int ind) const
		{
			if (ind >= this->nb || ind < 0)
				throw (std::exception());
			return (this->array[ind]);
		}
		
		int	size(void) const
		{
			return (this->nb);
		}
};
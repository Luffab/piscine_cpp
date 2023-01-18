/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:12:31 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/29 17:03:28 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int		nb_max;
		std::vector<int>	vector;

	public:
		Span(void);
		Span(unsigned int n);
		Span(const Span&);
		~Span();

		void				addNumber(int nb);
		void				addVector(std::vector<int> vec);
		unsigned int		getNbMax(void) const;
		std::vector<int>	getVector(void) const;
		int					shortestSpan(void);
		int					longestSpan(void);

		Span&	operator=(const Span&);

		class OutOfRangeException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Plus de place");
				}
		};
};

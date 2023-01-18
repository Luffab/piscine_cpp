/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:30:03 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/29 17:03:18 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): nb_max(0) {}

Span::Span(unsigned int n): nb_max(n) {}

Span::Span(const Span& source)
{
	*this = source;
}

Span::~Span() {}

unsigned int	Span::getNbMax() const
{
	return (this->nb_max);
}

void	Span::addNumber(int nb)
{
	if (this->vector.size() < this->nb_max)
		this->vector.push_back(nb);
	else
		throw (Span::OutOfRangeException());
}

void	Span::addVector(std::vector<int> vec)
{
	if (vec.size() > (this->nb_max - this->vector.size()))
		throw (Span::OutOfRangeException());
	this->vector.insert(this->vector.end(), vec.begin(), vec.end());
}

int	Span::shortestSpan(void)
{
	int							res;
	std::vector<int>			temp;
	std::vector<int>::iterator	it;

	temp = this->vector;
	sort(temp.begin(), temp.end());
	it = temp.begin() + 1;
	res = *(temp.begin() + 1) - *(temp.begin());
	while (it != temp.end() - 1)
	{
		if (*(it + 1) - *it < res)
			res = (*(it + 1) - *it);
		it++;
	}
	return (res);
}

int	Span::longestSpan(void)
{
	int					min;
	int 				max;
	std::vector<int>	temp;

	temp = this->vector;
	min = *min_element(temp.begin(), temp.end());
	max = *max_element(temp.begin(), temp.end());
	return (max - min);
}

std::vector<int>	Span::getVector() const
{
	return (this->vector);
}

Span&	Span::operator=(const Span& source)
{
	this->nb_max = source.getNbMax();
	this->vector = source.getVector();
	return (*this);
}
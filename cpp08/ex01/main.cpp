/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:09:03 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 19:32:46 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = 			Span(5);
	Span spp = 			Span(5);
	std::vector<int>	vec1;
	std::vector<int> 	vec2;
	std::vector<int>	vec3;


	vec1.push_back(6);
	vec1.push_back(3);
	vec1.push_back(17);
	vec2.push_back(9);
	vec2.push_back(11);
	vec3.push_back(9);
	vec3.push_back(11);
	vec3.push_back(54);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		spp.addVector(vec1);
		spp.addVector(vec2);

		std::cout << spp.shortestSpan() << std::endl;
		std::cout << spp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		spp.addVector(vec1);
		spp.addVector(vec3);

		std::cout << spp.shortestSpan() << std::endl;
		std::cout << spp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
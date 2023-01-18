/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:45:15 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/04 13:57:42 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	Array<int>			intArray(5);
	Array<std::string>	stringArray(-10);
	Array<std::string>	otherStringArray;

	try
	{
		stringArray[0] = "Salut";
		stringArray[1] = "Fere";
		stringArray[2] = "ca va ?";
		stringArray[3] = "Bien et toi ?";
		stringArray[4] = "J'aime le veau";
		
		intArray[0] = 42;
		intArray[1] = 50;
		intArray[2] = 16;
		intArray[3] = 8000;
		intArray[4] = 5;
	}
	catch(const std::exception& e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}

	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "VEAAAAAU";
	try
	{
		std::cout << "stringArray[100] = ";
		std::cout << stringArray[100] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "stringArray[-3] = ";
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "stringArray[3] = ";
		std::cout << stringArray[3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "otherStringArray[3] = ";
		std::cout << otherStringArray[3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "intArray[0] = ";
		std::cout << intArray[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Probleme" << std::endl;
		(void)e;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:12:13 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/25 16:59:26 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <cstdlib>

Base*	generate(void)
{
	int	nb;

	srand(time(0));
	nb = rand() % 3;
	if (nb == 0)
		return (new A());
	else if (nb == 1)
		return (new B());
	else if (nb == 2)
		return (new C());
	else
		throw(std::exception());
}

void	identify(Base* p)
{
	A* a;
	if ((a = dynamic_cast<A*>(p)))
		std::cout << "A" << std::endl;

	B* b;
	if ((b = dynamic_cast<B*>(p)))
		std::cout << "B" << std::endl;

	C* c;
	if ((c = dynamic_cast<C*>(p)))
		std::cout << "C" << std::endl;
	
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	
}

int	main()
{
	Base	*base;

	std::cout << "Avec references:" << std::endl;

	base = generate();
	identify(*base);
	delete base;

	std::cout << std::endl;
	std::cout << std::endl << "Avec pointeurs:" << std::endl;

	base = generate();
	identify(base);
	delete base;

	return (0);
}
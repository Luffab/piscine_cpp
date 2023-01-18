/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:13:33 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/29 14:30:50 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	int				nb;
	Animal			*meta[8];
	Brain			*brain;

	nb = -1;
	while (++nb < 8)
	{
		if (nb < 4)
			meta[nb] = new Cat();
		else
			meta[nb]= new Dog();
		std::cout << "meta[" << nb << "] = " << meta[nb]->getType() << std::endl;
	}
	std::cout << std::endl;
	brain = meta[4]->getBrain();
	brain->ideas[0] = "J'ai faim";
	brain->ideas[1] = "J'ai froid";
	brain->ideas[2] = "J'suis defoncé";
	std::cout << meta[4]->getType() << ": " << meta[4]->getBrain()->ideas[2] << std::endl;
	brain = meta[3]->getBrain();
	brain->ideas[0] = "J'aime le veau";
	brain->ideas[1] = "J'aime la viande";
	brain->ideas[2] = "J'adore le poulet";
	std::cout << meta[3]->getType() << ": " << meta[3]->getBrain()->ideas[1] << std::endl;

	std::cout << std::endl;

	nb = -1;
	while (++nb < 8)
		delete meta[nb];
	return 0;
}
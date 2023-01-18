/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:25:10 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/24 14:08:48 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brain;

	public:
		Dog(void);
		Dog(const Dog&);
		~Dog();

		void	makeSound(void) const;
		Brain*	getBrain(void) const;

		Dog&	operator=(const Dog&);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:16:32 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/24 14:19:59 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal&);
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType(void) const;
		virtual Brain	*getBrain( void ) const = 0;

		Animal&	operator=(const Animal&);
};

#endif
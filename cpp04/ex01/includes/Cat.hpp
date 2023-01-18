/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:27:44 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/24 14:08:37 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brain;

	public:
		Cat(void);
		Cat(const Cat&);
		~Cat();

		void	makeSound(void) const;
		Brain*	getBrain(void) const;

		Cat&	operator=(const Cat&);
};

#endif
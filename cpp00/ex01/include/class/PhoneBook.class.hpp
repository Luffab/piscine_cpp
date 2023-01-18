/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:22:49 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 13:42:33 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "../Repertory.hpp"
# include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact	users[8];
		int		nb;
		int		nb_ind;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	DisplayStart(void);
		void	AddContact(void);
		void	SearchContact(void);
		void	ShowSearch(void);
};

#endif
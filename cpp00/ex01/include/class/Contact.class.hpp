/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:28:36 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 17:22:44 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include "../Repertory.hpp"

class Contact
{
	private:
		static std::string	fields[5];
		std::string			infos[5];
		int					index;
	
		//std::string			first_name;
		//std::string			last_name;
		//std::string			nickname;
		//std::string			phone;
		//std::string			secret;

	public:
		Contact(void);
		~Contact(void);

		void	SetAllInfo(int ind);
		void	DisplayInfos(void);
		void	DisplayUser(void);
};

#endif
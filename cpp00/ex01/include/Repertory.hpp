/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:20:50 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/19 16:25:30 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPERTORY_HPP
# define REPERTORY_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <stdlib.h>

# include "class/Contact.class.hpp"
# include "class/PhoneBook.class.hpp"

# define MAX_CONTACT 8

bool	is_str_valid(std::string str);
bool	is_num_valid(std::string str);

#endif

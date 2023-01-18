/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:10:21 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/19 17:43:35 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
	public:
		Sed( void );
		~Sed( void );
		bool	setFile(std::string newFile);
		bool	replace(std::string s1, std::string s2);
		void	outputToFile(std::string content);

	private:
		std::string		s1;
		std::string		s2;
		std::string		fileName;
		std::ifstream	file;
};

#endif
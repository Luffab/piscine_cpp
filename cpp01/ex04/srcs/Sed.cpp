/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:44:57 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/28 16:49:20 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

bool	Sed::setFile(std::string newFile)
{
	if (newFile == "")
	{
		std::cout << "Le nom du fichier ne peut pas etre vide" << std::endl;
		return (false);
	}
	this->file.open(newFile);
	if (this->file)
	{
		this->fileName = newFile;
		return (true);
	}
	std::cout << "Le fichier n'existe pas" << std::endl;
	return (false);
}

bool	Sed::replace(std::string s1, std::string s2)
{
	std::string	str;
	size_t		i;

	i = 0;
	if (s1 == "" || s2 == "")
	{
		std::cout << "Les strings ne doivent pas etre vides" << std::endl;
		return (false);
	}
	str.assign(std::istreambuf_iterator<char>(this->file),
			std::istreambuf_iterator<char>());
	while (i < str.length())
	{
		if (str.compare(i, s1.length(), s1) == 0)
		{
			str.erase(i, s1.length());
			str.insert(i, s2);
			i += s2.length();
		}
		i++;
	}
	this->outputToFile(str);
	return (true);
}

void	Sed::outputToFile(std::string content)
{
	std::ofstream	out_file;
	std::string		out_fileName;

	out_fileName = this->fileName + ".replace";
	out_file.open(out_fileName);
	out_file << content;
}
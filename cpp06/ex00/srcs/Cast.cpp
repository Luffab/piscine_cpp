/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:10:49 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/25 15:26:52 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cast.hpp"

static std::string	tab[] = {
	"char: ",
	"int: ",
	"float: ",
	"double: "
};

bool	isPoint(std::string str)
{
	int	i;
	int	point;

	i = 0;
	point = 0;
	while (str[i])
	{
		if (str[i] == '.')
			point++;
		i++;
	}
	if (point == 1 || point == 0)
		return (true);
	return (false);
}

bool	isValid(std::string str, t_cast *c)
{
	size_t	i;

	i = 0;
	if (str.length() == 1)
		return (true);
	if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
	{
		c->ischar = true;
		return (true);
	}
	if (str[0] == '-')
		i++;
	if (str == "+inff" || str == "-inff" || str == "nanf" || str == "+inf" || str == "-inf" || str == "nan")
	{
		c->isnan = true;
		return (true);
	}
	if (!isPoint(str))
		return (false);
	while (str[i])
	{
		if (str[i] == 'f' && i == str.length() - 1)
			break;
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (false);
		i++;
	}
	return (true);
}

void	parseType(t_cast *c, std::string str)
{
	if (str[str.length() - 1] == 'f' && c->isnan == false && str.length() != 1 && !c->ischar)
		c->str = "float";
	else if (isPoint(str) == true && str[str.length() - 1] != 'f' && str.length() != 1 && !c->ischar)
		c->str = "double";
	else if (((str[0] < '0' || str[0] > '9') && str.length() == 1) || c->ischar == true)
		c->str = "char";
	else if (!c->isnan)
		c->str = "int";
}

void	convertBaseType(t_cast *c, std::string str)
{
	if (c->str == "float")
		c->f = atof(str.c_str());
	else if (c->str == "int")
		c->i = atoi(str.c_str());
	else if (c->str == "double")
		c->d = atof(str.c_str());
	else if (c->isnan == true)
	{
		c->f = atof(str.c_str());
		c->d = atof(str.c_str());
	}
	else if (c->str == "char" && c->ischar == false)
		c->c = str[0];
	else if (c->str == "char" && c->ischar == true)
		c->c = str[1];
}

void	convertAll(t_cast *c)
{
	if (c->str == "float")
	{
		c->c = static_cast<char>(c->f);
		c->i = static_cast<int>(c->f);
		c->d = static_cast<double>(c->f);
	}
	else if (c->str == "double")
	{
		c->c = static_cast<char>(c->d);
		c->i = static_cast<int>(c->d);
		c->f = static_cast<float>(c->d);
	}
	else if (c->str == "int")
	{
		c->c = static_cast<char>(c->i);
		c->d = static_cast<double>(c->i);
		c->f = static_cast<float>(c->i);
	}
	else if (c->str == "char")
	{
		c->i = static_cast<int>(c->c);
		c->d = static_cast<double>(c->c);
		c->f = static_cast<float>(c->c);
	}
}

void	printConvert(t_cast *c)
{
	if (c->isnan == false)
	{
		if (c->f != c->i || c->d != c->i)
			std::cout << tab[0] << "impossible" << std::endl;
		else if (c->c > 15)
			std::cout << tab[0] << "'" << c->c << "'" << std::endl;
		else if (c->c <= 15)
			std::cout << tab[0] << "Non displayable" << std::endl;
		if (c->d > 2147483647 || c->d < -2147483648)
			std::cout << tab[1] << "impossible" << std::endl;
		else if (c->d <= 2147483647 || c->d >= -2147483648)
			std::cout << tab[1] << c->i << std::endl;
		if (c->f == c->i)
			std::cout << tab[2] << c->f << ".0f" << std::endl;
		else if (c->f != c->i)
			std::cout << tab[2] << c->f << "f" << std::endl;
		if (c->d == c->i)
			std::cout << tab[3] << c->d << ".0" << std::endl;
		else if (c->d != c->i)
			std::cout << tab[3] << c->d << std::endl;
	}
	else if (c->isnan == true)
	{
		std::cout << tab[0] << "impossible" << std::endl;
		std::cout << tab[1] << "impossible" << std::endl;
		std::cout << tab[2] << c->f << "f" << std::endl;
		std::cout << tab[3] << c->d << std::endl;
	}
}

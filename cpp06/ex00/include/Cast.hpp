/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:07:59 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/26 14:30:31 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <math.h>

typedef struct	s_cast
{
	int			i;
	double		d;
	float		f;
	char		c;
	bool		isnan;
	std::string	str;
	bool		ischar;
}				t_cast;

bool	isValid(std::string str, t_cast *c);
void	printConvert(t_cast *c);
void	convertBaseType(t_cast *c, std::string str);
void	parseType(t_cast *c, std::string str);
void	convertAll(t_cast *c);
void	printConvert(t_cast *c);

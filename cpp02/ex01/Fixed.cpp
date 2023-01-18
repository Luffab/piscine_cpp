/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:40:24 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 19:33:11 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb_val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb_val = source.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->nb_val = nb << this->nb_bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->nb_val = (int)roundf(nb * (1 << this->nb_bits));
}

int	Fixed::getRawBits() const
{
	return (this->nb_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb_val = raw;
}

int	Fixed::toInt() const
{
	return (int(this->nb_val >> this->nb_bits));
}

float	Fixed::toFloat() const
{
	return (float(this->nb_val / roundf((1 << this->nb_bits))));
}

std::ostream&	operator<<(std::ostream &os, const Fixed& source)
{
	os << source.toFloat();
	return (os);
}
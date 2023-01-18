/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:40:24 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/21 14:34:17 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): nb_val(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &source)
{
	*this = source;
}

Fixed::Fixed(const int nb)
{
	this->nb_val = nb << this->nb_bits;
}

Fixed::Fixed(const float nb)
{
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
      return (a);
    return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
      return (a);
    return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
      return (a);
    return (b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
      return (a);
    return (b);
}

std::ostream&	operator<<(std::ostream &os, const Fixed& source)
{
	os << source.toFloat();
	return (os);
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	this->nb_val = source.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const &source)
{
	Fixed f;

    f.setRawBits(this->nb_val + source.getRawBits());
    return f;
}

Fixed Fixed::operator-(Fixed const &source)
{
	Fixed f;

    f.setRawBits(this->nb_val - source.getRawBits());
    return f;
}

Fixed Fixed::operator*(Fixed const &source)
{
    Fixed f;

    f.setRawBits((this->nb_val * source.getRawBits()) >> this->nb_bits);
    return f;
}

Fixed Fixed::operator/(Fixed const &source)
{
    Fixed f;

    f.setRawBits((this->nb_val << this->nb_bits) / source.getRawBits());
    return f;
}

bool Fixed::operator==(Fixed const &source) const
{
    return this->nb_val == source.getRawBits();
}

bool Fixed::operator<=(Fixed const &source) const
{
    return this->nb_val <= source.getRawBits();
}

bool Fixed::operator<(Fixed const &source) const
{
    return this->nb_val < source.getRawBits();
}

bool Fixed::operator>=(Fixed const &source) const
{
    return this->nb_val >= source.getRawBits();
}

bool Fixed::operator>(Fixed const &source) const
{
    return this->nb_val > source.getRawBits();
}

bool Fixed::operator!=(Fixed const &source) const
{
    return this->nb_val != source.getRawBits();
}

Fixed	&Fixed::operator++(void)
{
	this->nb_val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	f;

	f = *this;
	this->nb_val++;
	return (f);	
}

Fixed	&Fixed::operator--(void)
{
	this->nb_val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	f;

	f = *this;
	this->nb_val--;
	return (f);	
}
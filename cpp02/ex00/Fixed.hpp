/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:29:37 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/20 16:49:05 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					nb_val;
		static const int	nb_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed&);
		~Fixed();
		Fixed &operator=(const Fixed&);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};



#endif
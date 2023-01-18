/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:58:49 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/09 16:02:25 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed x;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const f( Fixed( 5.05f ) <= Fixed( 2 ) );
	Fixed const g( Fixed( 5.05f ) < Fixed( 2 ) );
	Fixed const h( Fixed( 5.05f ) >= Fixed( 2 ) );
	Fixed const i( Fixed( 5.05f ) > Fixed( 2 ) );
	Fixed const j( Fixed( 5.05f ) != Fixed( 2 ) );
	Fixed const k( Fixed( 5.05f ) == Fixed( 5.05f ) );
	Fixed const l( Fixed( 5.05f ) == Fixed( 5.04f ) );
	

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "--x = " << --x << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "x-- = " << x-- << std::endl;
	std::cout << "x = " << x << std::endl << std::endl;
	std::cout << "5.05 * 2 = " << b << std::endl;
	std::cout << "5.05 / 2 = " << c << std::endl;
	std::cout << "5.05 - 2 = " << d << std::endl;
	std::cout << "5.05 + 2 = " << e << std::endl;
	std::cout << "5.05 <= 2 = " << f << std::endl;
	std::cout << "5.05 < 2 = " << g << std::endl;
	std::cout << "5.05 >= 2 = " << h << std::endl;
	std::cout << "5.05 > 2 = " << i << std::endl;
	std::cout << "5.05 != 2 = " << j << std::endl;
	std::cout << "5.05 == 5.05 = " << k << std::endl;
	std::cout << "5.05 == 5.04 = " << l << std::endl << std::endl;
	std::cout << "a = " << a << ", b = " << b << " | ";
	std::cout << "max enre a et b = " << Fixed::max( a, b ) << std::endl;
	std::cout << "a = " << a << ", b = " << b << " | ";
	std::cout << "min enre a et b = " << Fixed::min( a, b ) << std::endl;

	return 0;
}
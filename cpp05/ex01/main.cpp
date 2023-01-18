/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:32:42 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/29 18:38:48 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main( void )
{
	try {
		Bureaucrat Eren("Eren", 50);
		Bureaucrat Luffy("Luffy", 1);
		Form war("GUERRRRRE", 10, 55);

		std::cout << Eren << std::endl;
		std::cout << Luffy << std::endl;
		std::cout << std::endl;
		std::cout << war << std::endl;

		Eren.signedForm(war);
		Luffy.signedForm(war);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

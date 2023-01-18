/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:32:42 by fatilly           #+#    #+#             */
/*   Updated: 2022/05/23 16:59:47 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main( void )
{
	Intern		usefulIdiot;
	Bureaucrat	paul("Paul", 1);
	Bureaucrat	jean("Jean", 150);
	Form		*form1;
	Form		*form2;
	Form		*form3;
	Form		*form4;

	try
	{
		form1 = usefulIdiot.makeForm("salami", "Eren");
		if (form1)
			form1->execute(paul);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form2 = usefulIdiot.makeForm("presidential pardon", "Luffy");
		if (form2)
			form2->execute(paul);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		form3 = usefulIdiot.makeForm("shrubbery creation", "Mikasa");
		if (form3)
		{
			form3->beSigned(paul);
			form3->execute(paul);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		form4 = usefulIdiot.makeForm("robotomy request", "naruto");
		if (form4)
		{
			form4->beSigned(jean);
			form4->execute(jean);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form1)
		delete form1;
	if (form2)
		delete form2;
	if (form3)
		delete form3;
	if (form4)
		delete form4;
	return (0);
}
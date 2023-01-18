/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:44:26 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 16:59:10 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Form;

class Intern
{
	private:
		typedef struct	s_form
		{
			std::string	name;
			Form		*form;
		}				t_form;

	public:
		Intern(void);
		Intern(const Intern&);
		~Intern();

		Form*	makeForm(std::string formName, std::string target);

		Intern&	operator=(const Intern&);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:53:30 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 17:11:32 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& source)
{
	*this = source;
}

Intern::~Intern() {}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	Form	*formType = NULL;
	int		i;

	i = 0;
	t_form	form[] = {
		{"presidential pardon", new PresidentialPardonForm(target)},
		{"shrubbery creation", new ShrubberyCreationForm(target)},
		{"robotomy request", new RobotomyRequestForm(target)},
		{"", NULL}
	};
	while(form[i].form != NULL)
	{
		if (form[i].name == formName)
			formType = form[i].form;
		else
			delete form[i].form;
		i++;
	}
	if (formType)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "Intern can't create " << formName << std::endl;
	return (formType);
}

Intern&	Intern::operator=(const Intern&)
{
	return (*this);
}
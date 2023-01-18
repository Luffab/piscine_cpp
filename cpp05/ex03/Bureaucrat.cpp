/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:25:21 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 15:43:29 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& source)
{
	*this = source;
}

Bureaucrat::~Bureaucrat() {}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::incGrade(void)
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

void	Bureaucrat::signedForm(Form& formulaire)
{
	try
	{
		formulaire.beSigned(*this);
		std::cout << this->name << " signed " << formulaire.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << formulaire.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executes form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& source)
{
	this->grade = source.getGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}
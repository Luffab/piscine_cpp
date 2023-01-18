/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:50:37 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/24 18:53:10 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {}

Form::Form(std::string name, int signedGrade, int exGrade): name(name), isSigned(false)
{
	if (signedGrade > 150 || exGrade > 150)
		throw (Form::GradeTooLowException());
	else if (signedGrade < 1 || exGrade < 1)
		throw (Form::GradeTooHighException());
	else
	{
		this->signedGrade = signedGrade;
		this->exGrade = exGrade;
	}
}

Form::~Form() {}

void	Form::beSigned(const Bureaucrat& bureaucrate)
{
	if (bureaucrate.getGrade() <= this->signedGrade)
		this->isSigned = true;
	else
		throw (Form::GradeTooLowException());
}

int	Form::getSignedGrade() const
{
	return (this->signedGrade);
}

int	Form::getExGrade() const
{
	return (this->exGrade);
}

bool	Form::getSigned() const
{
	return (this->isSigned);
}

std::string	Form::getName() const
{
	return (this->name);
}

Form&	Form::operator=(const Form& source)
{
	this->exGrade = source.getExGrade();
	this->signedGrade = source.getSignedGrade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Form const& i)
{
	o << "Formulaire:" << std::endl << "Name: " << i.getName() << std::endl << "Grade for sign: " << i.getSignedGrade()
		<< std::endl << "Grade for execute: " << i.getExGrade() << std::endl;
	return (o);
}
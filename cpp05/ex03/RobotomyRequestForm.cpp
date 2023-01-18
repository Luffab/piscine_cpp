/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:57:02 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 17:00:27 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("robotomy request", 75, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& source)
{
	*this = source;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::exClass() const
{
	std::srand(time(0));
	if (this->exGrade > 45)
		throw (RobotomyRequestForm::GradeTooLowException());
	else
	{
		std::cout << "Brrrrrrrrrr" << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << this->target << " has been robotomized" << std::endl;
		else
			std::cout << "The operation failed" << std::endl;
	}
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	this->target = source.getTarget();
	return (*this);
}
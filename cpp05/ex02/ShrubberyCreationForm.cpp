/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:52:05 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 16:04:43 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& source)
{
	*this = source;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::exClass() const
{
	std::ofstream	file;
	std::string		fileName = this->target + "_shrubbery";
	if (this->exGrade > 137)
		throw (ShrubberyCreationForm::GradeTooLowException());
	else
	{
		file.open(fileName);
		file << "      ,.," << std::endl;
		file << "      MMMM_    ,..," << std::endl;
		file << "        \"_ \"__\"MMMMM          ,...,," << std::endl;
		file << " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl;
		file << "MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"" << std::endl;
		file << " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl;
		file << "        ,., _\"__ \\__./ .\"" << std::endl;
		file << "       MMMMM_\"  \"_    ./" << std::endl;
		file << "        ''''      (    )" << std::endl;
		file << " ._______________.-'____\"---._." << std::endl;
		file << "  \\                          /" << std::endl;
		file << "   \\________________________/" << std::endl;
		file << "   (_)                    (_)" << std::endl;
		file.close();
		std::cout << "The Shrubbery was created in " << this->target << "_shrubbery"
			<< std::endl;
	}
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
	this->target = source.getTarget();
	return (*this);
}
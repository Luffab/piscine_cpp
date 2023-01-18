/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:38:41 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/25 15:50:51 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		Form(void);
		Form(std::string name, int signedGrade, int exGrade);
		Form(const Form&);

		const std::string	name;
		bool				isSigned;
		int					signedGrade;
		int					exGrade;
		virtual void	exClass(void) const = 0;
		

	public:
		virtual ~Form();

		void			beSigned(const Bureaucrat& bureaucrate);
		bool			getSigned(void) const;
		int				getSignedGrade(void) const;
		int				getExGrade(void) const;
		std::string		getName(void) const;
		void			execute(const Bureaucrat& executor) const;

		Form&	operator=(const Form&);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Le grade est trop haut");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Le grade est trop bas");
				}
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Le formulaire n'est pas signé");
				}
		};

};

std::ostream&	operator<<(std::ostream& o, Form const& i);

#endif
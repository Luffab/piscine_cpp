/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatilly <fatilly@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:30:21 by fatilly           #+#    #+#             */
/*   Updated: 2022/04/27 14:04:31 by fatilly          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <stack>

template<typename T>

class MutantStack: public std::stack<T>
{
	public:
		MutantStack<T>(void) {}

		MutantStack<T>(const MutantStack<T>&source)
		{
			*this = source;
		}

		~MutantStack<T>() {}

		MutantStack<T>&	operator=(const MutantStack<T>&)
		{
			return (*this);
		}
		
		typedef typename std::stack<T>::container_type::iterator 					iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

		iterator    			begin(void) { return this->c.begin(); }
		iterator    			end(void) { return this->c.end(); }

		reverse_iterator    	rbegin(void) { return this->c.rbegin(); }
		reverse_iterator    	rend(void) { return this->c.rend(); }

		const_iterator    		cbegin(void) { return this->c.cbegin(); }
		const_iterator   		cend(void) { return this->c.cend(); }

		const_reverse_iterator	crbegin(void) { return this->c.crbegin(); }
		const_reverse_iterator	crend(void) { return this->c.crend(); }
};

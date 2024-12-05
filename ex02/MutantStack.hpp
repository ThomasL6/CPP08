/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:54:57 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/25 16:17:38 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		//Canonic form
		MutantStack() : MutantStack<T, Container>::stack() {};
		MutantStack& operator=(MutantStack const &rhs);
		MutantStack(MutantStack const &other): MutantStack<T, Container>::stack(other) {};
		virtual~MutantStack(){}
		
		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;

		iterator 	begin();
		iterator end();
		reverse_iterator reverseBegin();
		reverse_iterator reverseEnd();
};

#include "MutantStack.tpp"
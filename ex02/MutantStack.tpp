/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:14:50 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/25 16:14:51 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(MutantStack<T, Container> const &rhs)
{
	if(this != &rhs)
		std::stack<T, Container>::stack::operator=(rhs);
	return(*this);
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
	return this->c.begin();
} 

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
	return this->c.end();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::reverseBegin()
{
	return this->c.rbegin();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::reverseEnd()
{
	return this->c.rend();
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:40:47 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/23 14:23:27 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>

class NothingInTab:public std::exception
{
	public:
		const char* what() const throw()
		{	
			return("Element not found");
		}
};

template <typename T>
typename T::iterator easyfind(T &tab, int n)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), n);
	if(it != tab.end())
		return it;
	else
		throw NothingInTab();
}

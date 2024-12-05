/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:42:28 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/23 14:30:14 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector <int> vect;
	vect.push_back(1);
	vect.push_back(3);
	vect.push_back(2);
	vect.push_back(4);
	try
	{
		std::vector<int>::iterator it = easyfind(vect, 2);
		std::cout << "Found value: " << *it << std::endl;

		it = easyfind(vect, 6);
		std::cout << "Found value: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::list<int> lst;
	for(int i = 0; i <= 42; i++)
		lst.push_back(i);
	try
	{
		std::list<int>::iterator itLst = easyfind(lst, 50);
		std::cout << "Found value: " << *itLst << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{

		std::list<int>::iterator itLst = easyfind(lst, 5);
		std::cout << "Found value: " << *itLst << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
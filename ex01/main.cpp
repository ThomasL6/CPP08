/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 16:18:19 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/25 12:35:44 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	unsigned int sizeSpan;
	std::cout << "Span wanted ";
	std::cin >> sizeSpan ;
	Span sp1(sizeSpan);
	
	try
	{
		sp1.addNumberBis(sizeSpan);
		std::cout << sp1 <<std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
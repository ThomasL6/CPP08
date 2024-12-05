/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:14:34 by thlefebv          #+#    #+#             */
/*   Updated: 2024/11/25 11:47:17 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

class Span
{
	private:
		Span();
		unsigned int m_size;
		std::vector <int> m_nb;
		
	public:
		Span(unsigned int n);
		Span(Span const& other);
		Span& operator=(Span const &rhs);
		~Span(){};

		void addNumber(int n);
		void addNumberBis(unsigned int n);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

	class SpanFullException:public std::exception
	{
		public:
			const char* what() const throw()
			{
				return("Span is already full");
			}
	};
	class SpanEmptyException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return("Span empty");
			}
	};
	class SpanOneException: public std::exception
	{
		public:
			const char* what() const throw()
			{
				return("Span contains only one data");
			}
	};
	friend std::ostream& operator<<(std::ostream& os, const Span& sp);
};

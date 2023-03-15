/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:04:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/14 12:59:10 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

int main()
{
	srand(time(NULL));
	
	Span a(1);
	Span b(10);
	Span c(15000);
	
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		a.addNumber(9);
		std::cout << a << std::endl;
		std::cout << a.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << a.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------------------------" << std::endl;
	try
	{
		for (int i = 0; i < 12; i++)
			b.addNumber(rand() % 1000);
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << b << std::endl;
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	
	try
	{
		for (int i = 0; i < 15000; i++)
			c.addNumber(rand() % 1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// std::cout << c << std::endl;
	std::cout << c.shortestSpan() << std::endl;
	std::cout << c.longestSpan() << std::endl;	
	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
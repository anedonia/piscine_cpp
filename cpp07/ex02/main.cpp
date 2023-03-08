/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:27:59 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/08 22:38:29 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a;
	Array<std::string> b(5);
	Array<char> c(5);
	Array<int> d(5);
	

	std::string tab[5] = {"bonjour", "je", "m\'appelle", "louis", "."};

	std::cout << "-----------------------------------" << std::endl;
	std::cout << b.size() << std::endl;
	for (int i = 0; i < 5; i++)
		b[i] = tab[i];
		
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << std::endl;
	
	std::cout << "-----------------------------------" << std::endl;
	std::cout << a.size() << std::endl;
	try
	{
		a[43];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------------------" << std::endl;
	std::cout << c.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << std::endl;
	
	std::cout << "-----------------------------------" << std::endl;
	std::cout << d.size() << std::endl;
	for (int i = 0; i < 5; i++)
		d[i] = i;

	Array<int> e(d);
	for (int i = 0; i < 5; i++)
		std::cout << d[i] << std::endl;
	
	std::cout << "cout e which is constructed from d" << std::endl;
	std::cout << e.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << e[i] << std::endl;
	
	std::cout << "cout a which is copied from e" << std::endl;
	a = e;
	std::cout << a.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << e[i] << std::endl;
	std::cout << &e[0] << " : e vs d : " << &d[0] << std::endl;
	// e.~Array();
	// std::cout << "cout of d after e was destroyed" << std::endl;
	// for (int i = 0; i < 5; i++)
	// 	std::cout << d[i] << std::endl;
	std::cout << "-----------------------------------" << std::endl;
}
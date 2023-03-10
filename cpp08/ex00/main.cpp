/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:14:10 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/10 21:19:25 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator it;
	

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	
	
	std::cout << "---------------------------------------------" << std::endl;
	try
	{
		it = easyfind(vec, 30);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------------" << std::endl;
	try
	{
		it = easyfind(vec, 10);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------------" << std::endl;
	try
	{
		it = easyfind(vec, 60);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---------------------------------------------" << std::endl;
	return 0;	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:05:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 20:20:03 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main()
{
	uintptr_t a;
	Data *two_ser;
	
	Data one;
	Data two("louis", 24);
	Data three(two);

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << "  \'three\' est une copy de \'two\'" << std::endl;
	
	a = serialize(&two);
	two_ser = deserialize(a);
	
	std::cout << "-----------------------------------" << std::endl;;
	std::cout << *two_ser << std::endl;
}
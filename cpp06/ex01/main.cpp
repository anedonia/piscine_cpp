/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:05:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 22:13:21 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Data.hpp"
#include "./Serialize.hpp"
#include <iostream>
#include <stdint.h>

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
	
	a = Serialize::serialize(&two);
	two_ser = Serialize::deserialize(a);
	
	std::cout << "-----------------------------------" << std::endl;;
	std::cout << *two_ser << std::endl;
}
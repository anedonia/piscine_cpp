/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:34:03 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/10 14:27:04 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	
	Fixed const d( Fixed( 5.05f ) / Fixed( 2 ) );
	
	std::cout << d << std::endl;
	std::cout << "min entre " << d << " et " << b << " " << Fixed::min(d, b) << std::endl;

	std::cout << "decremetation :" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	
	std::cout << "is a(0) > b(10,1..)" << std::endl;
	if (a > b)
		std::cout << "a is greater" << std::endl;
	else
		std::cout << "b is greater" << std::endl;
		
	std::cout << "is a(0) < b(10,1..)" << std::endl;
	if (a < b)
		std::cout << "a is smaller" << std::endl;
	else
		std::cout << "b is smaller" << std::endl;
	
	Fixed e;
	std::cout << "is a(0) <= e(0)" << std::endl;
	if (a <= e)
		std::cout << "a is smaller or equal" << std::endl;
	else
		std::cout << "b is smaller" << std::endl;	
		
	std::cout << "is a(0) >= e(0)" << std::endl;
	if (a >= e)
		std::cout << "a is bigger or equal" << std::endl;
	else
		std::cout << "b is bigger" << std::endl;
	std::cout << "is a(0) == e(0)" << std::endl;
	if (a == e)
		std::cout << "a and e equal" << std::endl;
	else
		std::cout << "!=" << std::endl;	
		
	std::cout << "is a(0) == b(10.1...)" << std::endl;
	if (a == b)
		std::cout << "equal" << std::endl;
	else
		std::cout << "a != b" << std::endl;	
	return 0;
}
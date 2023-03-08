/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:25:23 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/07 13:54:07 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main()
{
	int a, b;
	float c, d;
	char e, f;
	double i, j;
	
	a = 1;
	b = 2;

	c = 2.5f;
	d = 5.45f;

	e = 'p';
	f = 'z';
	
	i = 2.344343434;
	j = 8.989889;

	std::cout << "a : " << a << "  b : " << b << std::endl;
	swap<int>(a, b);
	std::cout << "Swap a : " << a << "  b : " << b << std::endl;
	std::cout << "a : " << a << "  b : " << b << "| min is : " << min<int>(a, b) << " |" << std::endl;
	std::cout << "a : " << a << "  b : " << b << "| max is : " << max<int>(a, b) << " |" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	
	std::cout << "c : " << c << "  d : " << d << std::endl;
	swap<float>(c, d);
	std::cout << "Swap c : " << c << "  d : " << d << std::endl;
	std::cout << "c : " << c << "  d : " << d << "| min is : " << min<float>(c, d) << " |" << std::endl;
	std::cout << "c : " << c << "  d : " << d << "| max is : " << max<float>(c, d) << "|" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	
	std::cout << "e : " << e << "  f : " << f << std::endl;
	swap<char>(e, f);
	std::cout << "Swap c : " << e << "  f : " << f << std::endl;
	std::cout << "e : " << e << "  f : " << f << "| min is : " << min<char>(e, f) << " |" << std::endl;
	std::cout << "e : " << e << "  f : " << f << "| max is : " << max<char>(e, f) << "|" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	
	std::cout << "i : " << i << "  j : " << j << std::endl;
	swap<double>(i, j);
	std::cout << "Swap i : " << i << "  j : " << j << std::endl;
	std::cout << "i : " << i << "  j : " << j << "| min is : " << min<double>(i, j) << " |" << std::endl;
	std::cout << "i : " << i << "  j : " << j << "| max is : " << max<double>(i, j) << "|" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	
	return 0;
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return 0;
// }
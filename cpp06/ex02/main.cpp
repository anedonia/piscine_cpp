/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:44:55 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 21:52:05 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cmath>

Base * generate(void)
{
	Base * ret;
	int case_nb = rand() % 3;
	switch (case_nb)
	{
	case 0:
		ret = new A;
		break;
	case 1:
		ret = new B;
		break;
	case 2:
		ret = new C;
		break;
	}
	return (ret);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "class of type A (ptr)" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "class of type B (ptr)" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "class of type C (ptr)" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A tmp  = dynamic_cast<A&>(p);
		std::cout << "class de type A (ref)" << std::endl;
		(void)tmp;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B tmp = dynamic_cast<B&>(p);
		std::cout << "class de type B (ref)" << std::endl;
		(void)tmp;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C tmp = dynamic_cast<C&>(p);
		std::cout << "class de type C (ref)" << std::endl;
		(void)tmp;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
}

int main()
{
	srand(time(NULL));
	
	Base * one = generate();
	Base & r_one = *one;
	
	Base * two = generate();
	Base & r_two = *two;
	
	Base * three = generate();
	Base & r_three = *three;
	
	std::cout << "------------------------------------" << std::endl;
	identify(one);
	identify(r_one);
	std::cout << "------------------------------------" << std::endl;
	identify(two);
	identify(r_two);
	std::cout << "------------------------------------" << std::endl;
	identify(three);
	identify(r_three);
	std::cout << "------------------------------------" << std::endl;
	
	delete one;
	delete two;
	delete three;
}

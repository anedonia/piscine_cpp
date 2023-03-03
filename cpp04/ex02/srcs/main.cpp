/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:34:17 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:09:12by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

int main()
{

	Animal *tab[10];

	// Animal test;
	// Animal testest;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			tab[i] = new Cat();
		else 
			tab[i] = new Dog();
	}
	{
		std::cout << std::endl;

		Cat fofo;
		Cat fifi;
		std::cout << fifi.getBrain() << std::endl;
		fofo = fifi;
		std::cout << fofo.getBrain() << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << tab[i]->getType() << std::endl;
	}
	std::cout << std::endl;

	Cat full_obj(*(Cat *)tab[1]);
	for (int i = 0; i < 10; i++)
	{
		std::cout << full_obj.getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete tab[i];
	}
	return 0;
}
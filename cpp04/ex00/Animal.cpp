/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:35:18 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 18:55:58 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : default constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal : default destructor" << std::endl;
}

Animal::Animal(const Animal & inst)
{
	std::cout << "Animal : copy constructor" << std::endl;
	*this = inst;
}

Animal & Animal::operator=(const Animal & inst)
{
	_type = inst._type;
	return *this;
}

std::string Animal::getType()
{
	return _type;
}

void Animal::makeSound()
{
	std::cout << "Animal : sound" << std::endl;
}
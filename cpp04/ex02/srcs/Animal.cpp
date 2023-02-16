/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:35:18 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:07:20 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Animal::Animal()
{
	std::cout << "Animal : default constructor" << std::endl;
}

Animal::Animal(std::string type):_type(type)
{
	std::cout << "Animal : type " + type + " constructor" << std::endl;
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

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Animal : sound" << std::endl;
}
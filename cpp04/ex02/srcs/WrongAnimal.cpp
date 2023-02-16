/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:14:07 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 15:15:11 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal : default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type)
{
	std::cout << "WrongAnimal : type " + type + " constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal : default destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & inst)
{
	std::cout << "WrongAnimal : copy constructor" << std::endl;
	*this = inst;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & inst)
{
	_type = inst._type;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal : sound" << std::endl;
}
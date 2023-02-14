/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:13:51 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:08:23 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog : default constructor" << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog : default destructor " + _type << std::endl;
}

Dog::Dog (std::string type): Animal(type)
{
	std::cout << "Dog : type " + type + " constructor" << std::endl;
}

Dog::Dog (const Dog & inst): Animal(inst)
{
	std::cout << "Dog : copy constructor " + inst._type << std::endl;
}

Dog & Dog::operator=(const Dog & rhs)
{
	_type = rhs._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog : bark ? " << std::endl;
}

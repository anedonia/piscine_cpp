/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:13:51 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/16 18:32:42 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog : default constructor" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog : default destructor " + _type << std::endl;
}

Dog::Dog (std::string type): Animal(type), _brain(new Brain())
{
	std::cout << "Dog : type " + type + " constructor" << std::endl;
}

Dog::Dog (const Dog & inst): Animal(inst)
{
	_brain = new Brain(*inst._brain);
	std::cout << "Dog : copy constructor " + inst._type << std::endl;
}

Dog & Dog::operator=(const Dog & rhs)
{
	_type = rhs._type;
	if (_brain)
		delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog : bark ? " << std::endl;
}

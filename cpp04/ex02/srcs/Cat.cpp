/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:38:56 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/16 18:32:14 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat : default constructor" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat : default destructor " + _type << std::endl;
}

Cat::Cat (std::string type): Animal(type), _brain(new Brain())
{
	std::cout << "Cat : type " + type + " constructor" << std::endl;
}

Cat::Cat (const Cat & inst): Animal(inst)
{
	_brain = new Brain(*inst._brain);
	std::cout << "Cat : copy constructor " + inst._type << std::endl;
}

Cat & Cat::operator=(const Cat & rhs)
{
	_type = rhs._type;
	if (_brain)
		delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat : meow " << std::endl;
}

Brain * Cat::getBrain() const
{
	return _brain;
}
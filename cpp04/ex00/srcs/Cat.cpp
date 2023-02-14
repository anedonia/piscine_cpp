/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:38:56 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:08:02 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat : default constructor" << std::endl;
	_type = "cat";
}

Cat::~Cat()
{
	std::cout << "Cat : default destructor " + _type << std::endl;
}

Cat::Cat (std::string type): Animal(type)
{
	std::cout << "Cat : type " + type + " constructor" << std::endl;
}

Cat::Cat (const Cat & inst): Animal(inst)
{
	std::cout << "Cat : copy constructor " + inst._type << std::endl;
}

Cat & Cat::operator=(const Cat & rhs)
{
	_type = rhs._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat : meow " << std::endl;
}

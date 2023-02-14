/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:15:30 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 15:17:19 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat : default constructor" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : default destructor " + _type << std::endl;
}

WrongCat::WrongCat (std::string type): WrongAnimal(type)
{
	std::cout << "WrongCat : type " + type + " constructor" << std::endl;
}

WrongCat::WrongCat (const WrongCat & inst): WrongAnimal(inst)
{
	std::cout << "WrongCat : copy constructor " + inst._type << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
	_type = rhs._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat : meow " << std::endl;
}

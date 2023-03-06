/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:50:03 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 20:10:05 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data():_name("exemple"), _nb(42)
{
}

Data::Data(std::string name, int nombre):_name(name), _nb(nombre)
{
}

Data::Data(const Data & inst)
{
	*this = inst;
}

Data & Data::operator=(const Data & inst)
{
	this->_name = inst._name;
	this->_nb = inst._nb;
	return *this;
} 

Data::~Data()
{
}

std::string Data::getName() const
{
	return _name;
}

int Data::getNb() const
{
	return _nb;
}

std::ostream & operator<<(std::ostream &o, const Data & inst)
{
	o << inst.getName() + " " << inst.getNb();
	return o;
}
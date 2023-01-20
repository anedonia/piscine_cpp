/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:09:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:37:47 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void) const
{
	return(this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
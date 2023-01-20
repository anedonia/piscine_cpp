/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:08 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:51:40 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

HumanB::HumanB(std::string name): _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& inst)
{
	this->_weapon = &inst;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else 
		std::cout << "bare hands" << std::endl;
}
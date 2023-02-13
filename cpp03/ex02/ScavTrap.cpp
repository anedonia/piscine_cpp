/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:35:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 16:57:17 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Void ScavTrap constructor " + _name << std::endl;
	_hp = 100;
	_energy = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Name ScavTrap constructor " + _name << std::endl;
	_hp = 100;
	_energy = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap & inst) : ClapTrap(inst)
{
	std::cout << "Copy ScavTrap constructor " << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &inst)
{
	_name = inst._name;
	_hp = inst._hp;
	_ad = inst._ad;
	_energy = inst._energy;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor constructor " + _name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energy <= 0)
	{
		std::cout << "Scav " + _name + " is too tired to do anything" << std::endl;
		return;
	}
	_energy -= 10;
	std::cout << "Scav " + _name + " attacks " + target + ", causing " << _ad << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << _name + " has entered Gate keeper" << std::endl;
}
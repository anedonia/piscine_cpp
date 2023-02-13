/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap .cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:35:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 16:57:17 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap ::FragTrap (): ClapTrap()
{
	std::cout << "Void FragTrap  constructor " + _name << std::endl;
	_hp = 100;
	_energy = 100;
	_ad = 20;
}

FragTrap ::FragTrap (std::string name) : ClapTrap(name)
{
	std::cout << "Name FragTrap  constructor " + _name << std::endl;
	_hp = 100;
	_energy = 100;
	_ad = 20;
}

FragTrap ::FragTrap (const FragTrap  & inst) : ClapTrap(inst)
{
	std::cout << "Copy FragTrap  constructor " << std::endl;
}

FragTrap  &FragTrap ::operator=(const FragTrap  &inst)
{
	_name = inst._name;
	_hp = inst._hp;
	_ad = inst._ad;
	_energy = inst._energy;
	return *this;
}

FragTrap ::~FragTrap ()
{
	std::cout << "FragTrap  destructor " + _name << std::endl;
}

void FragTrap ::attack(const std::string &target)
{
	if (_energy <= 0)
	{
		std::cout << "Frag " + _name + " is too tired to do anything" << std::endl;
		return;
	}
	_energy -= 10;
	std::cout << "Frag " + _name + " attacks " + target + ", causing " << _ad << " points of damage!" << std::endl;
}

void FragTrap ::highFivesGuys(void)
{
	std::cout << "High five ?" << std::endl;
	return;
}
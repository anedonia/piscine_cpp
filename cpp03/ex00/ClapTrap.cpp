/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:17:51 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 13:19:02 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name):_name(name), _hp(10), _energy(10), _ad(0)
{
	std::cout << "name constructor called" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "destrutor called" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap & inst)
{
	std::cout << "copy constructor called" << std::endl;
	*this = inst;
	return;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
{
	_name = rhs._name;
	_hp = rhs._hp;
	_energy = rhs._energy;
	_ad = rhs._ad;
	return (*this);
}

//fct membres
void ClapTrap::attack(const std::string &target)
{
	if (_energy == 0)
	{
		std::cout << _name + " is too tired to do anything" << std::endl;
		return;
	}
	_energy--;
	std::cout << _name + " attacks " + target + ", causing " << _ad << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
		std::cout << _name + " is already dead stop it." << std::endl;
	_hp -= amount;
	if (_hp > 0)
	{
		std::cout << _name + " received " << amount << " points of damage!" << std::endl;
		std::cout << _name + " has " << _hp << " hp left.." << std::endl;
		
	}
	else
		std::cout << _name + " died from this attack RIP" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy == 0)
	{
		std::cout << _name + " is too tired to do anything" << std::endl;
		return;
	}
	_energy--;
	_hp += amount;
	std::cout << _name + " healed " << amount << " and is back to " << _hp << " hp." << std::endl;
}

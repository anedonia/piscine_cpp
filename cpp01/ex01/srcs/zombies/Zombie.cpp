/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:36:54 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 20:08:12 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name): _name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name + " Destructor was called." << std::endl;
	return;
}

void Zombie::announce(void) const
{
	std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}
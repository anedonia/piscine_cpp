/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:40 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:31:28 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

HumanA::HumanA(std::string name, Weapon &inst):_name(name), _Weapon(inst)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_Weapon.getType() << std::endl;
}
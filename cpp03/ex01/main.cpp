/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:09:42 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 16:47:34 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap empty;
	ScavTrap tom("tim");
	ScavTrap tim(tom);
	ScavTrap tomtom("tomtom");
	
	empty = tomtom;

	empty.attack("Jean-marie");
	tim.takeDamage(6);
	tim.takeDamage(6);
	
	tim.beRepaired(100);
	
	for (int i = 0; i < 10; i++)
		tim.attack("louis");
	empty.guardGate();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:09:42 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 13:22:15 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap empty;
	ClapTrap tom("tim");
	ClapTrap tim(tom);
	ClapTrap tomtom("tomtom");
	
	empty = tomtom;

	empty.attack("Jean-marie");
	tim.takeDamage(6);
	tim.takeDamage(6);
	
	tim.beRepaired(100);
	
	for (int i = 0; i < 10; i++)
		tim.attack("louis");
	return (0);
}
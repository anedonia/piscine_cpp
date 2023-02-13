/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:09:42 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 17:32:47 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap empty;
	FragTrap tom("tim");
	FragTrap tim(tom);
	FragTrap tomtom("tomtom");
	
	empty = tomtom;

	empty.attack("Jean-marie");
	tim.takeDamage(6);
	tim.takeDamage(6);
	
	tim.beRepaired(100);
	
	for (int i = 0; i < 11; i++)
		tim.attack("louis");
	empty.highFivesGuys();
	return (0);
}
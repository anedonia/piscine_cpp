/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:34:21 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 19:05:42 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

int	main(void)
{
	Zombie zom1("zom1");
	Zombie	*zom2 = newZombie("zom2");

	zom1.announce();
	zom2->announce();
	randomChump("zom3");
	
	delete zom2;
}
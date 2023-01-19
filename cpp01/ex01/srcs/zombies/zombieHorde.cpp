/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:36:54 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 20:11:41 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return(horde);
}
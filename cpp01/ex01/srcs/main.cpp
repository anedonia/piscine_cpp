/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:34:21 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 20:11:28 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

int	main(void)
{
	Zombie *horde;
	int		N = 5;

	horde = zombieHorde(N, "retard");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}
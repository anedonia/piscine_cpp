/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:37:19 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 19:05:16 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
#define INCLUDES_H

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif
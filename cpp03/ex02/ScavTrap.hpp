/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:30:36 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 16:17:25 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
	
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & inst);

	ScavTrap & operator=(const ScavTrap & inst);
	
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate(void);
};




#endif
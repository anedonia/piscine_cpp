/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:20:57 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 13:19:08 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
private:

	std::string _name;
	int 		_hp;
	int 		_energy;
	int 		_ad;
	
public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & inst);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
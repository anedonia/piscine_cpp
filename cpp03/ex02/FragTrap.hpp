/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:30:36 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/13 17:16:14 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap & inst);

	FragTrap & operator=(const FragTrap & inst);
	
	~FragTrap();

	void attack(const std::string &target);
	void highFivesGuys(void);
};




#endif
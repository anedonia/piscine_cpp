/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:17:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:49:14 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
	std::string _name;
	Weapon *_weapon;
	
public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& inst);
	void	attack(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:18:06 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:37:41 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	void		setType(std::string type);
	std::string getType(void) const;
};


#endif
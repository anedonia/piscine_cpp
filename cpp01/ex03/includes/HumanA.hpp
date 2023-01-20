/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:17:52 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/20 20:31:34 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
	std::string	_name;
	Weapon 		&_Weapon;
public:
	HumanA();
	HumanA(std::string name, Weapon &inst);
	~HumanA();

	void	attack(void) const;
};

#endif
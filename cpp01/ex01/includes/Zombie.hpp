/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:35:07 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 20:07:39 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();
	
	void set_name(std::string name);
	void announce(void) const;
};




#endif
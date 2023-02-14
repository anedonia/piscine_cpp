/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:32:45 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 15:45:30 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain & inst);
	Brain & operator=(const Brain & rhs);
	~Brain();
};

Brain::Brain(/* args */)
{
}

Brain::~Brain()
{
}



#endif
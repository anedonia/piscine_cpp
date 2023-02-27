/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:32:10 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/16 17:58:36 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Brain::Brain()
{

	std::cout << "Brain : default constructor" << std::endl;
	const std::string tmp[] = {
		"Je ne veux pas brûler le monde",
		"lol mdr", 
		"God is not real anymore", 
		"If my calculator had a history, it would be more embarrassing than my browser history.",
		"I've woken up over 10,000 times and I'm still not used to it" 
	};
	
	for (int i = 0; i < 100; i++)
		_ideas[i] = tmp[i % 5];
}

Brain::~Brain()
{
	std::cout << "Brain : default destructor" << std::endl;
}

Brain::Brain(const Brain & inst)
{
	std::cout << "Brain : copy construtor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = inst._ideas[i];
}

Brain & Brain::operator=(const Brain & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string	Brain::getIdea(int i)
{
	return _ideas[i];
}
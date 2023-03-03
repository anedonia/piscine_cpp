/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:32:45 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/15 17:14:27 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain & inst);
	Brain & operator=(const Brain & rhs);
	~Brain();

	std::string getIdea(int i);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:50:30 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 20:06:01 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <string>

class Data
{
private:
	std::string _name;
	int	_nb;
public:
	Data();
	Data(std::string name, int nombre);
	Data(const Data & inst);
	Data & operator=(const Data & inst);
	~Data();

	std::string getName() const;
	int getNb() const;
};

std::ostream & operator<<(std::ostream &o, const Data & inst);


#endif
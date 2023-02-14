/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:35:18 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:12:35 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	
protected:
	std::string _type;
	
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal & inst);

	Animal & operator=(const Animal & rhs);

	virtual void makeSound() const;
	std::string getType() const;
	
	virtual ~Animal();
};

#endif
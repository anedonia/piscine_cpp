/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:13:01 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:15:49 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal
{
protected:
	
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog & inst);

	Dog & operator=(const Dog & rhs);

	void makeSound() const;
	
	~Dog();
};

#endif
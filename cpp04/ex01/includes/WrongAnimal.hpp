/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:09:08 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 15:13:47 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal
{
	
protected:
	std::string _type;
	
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal & inst);

	WrongAnimal & operator=(const WrongAnimal & rhs);

	void makeSound() const;
	std::string getType() const;
	
	~WrongAnimal();
};

#endif
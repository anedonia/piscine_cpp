/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:12:18 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/25 15:07:16 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
protected:
	
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat & inst);

	WrongCat & operator=(const WrongCat & rhs);

	void makeSound() const;
	
	~WrongCat();
};

#endif
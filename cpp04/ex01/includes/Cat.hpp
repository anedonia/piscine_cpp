/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:37:36 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/16 18:11:38 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{

private:
	Brain *_brain;

public:
	Cat();
	Cat(std::string type);
	Cat(const Cat & inst);

	Cat & operator=(const Cat & rhs);

	void makeSound() const;
	Brain * getBrain() const;
	
	~Cat();
};

#endif
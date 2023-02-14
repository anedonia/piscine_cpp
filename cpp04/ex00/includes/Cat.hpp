/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:37:36 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:15:44 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal
{
protected:
	
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat & inst);

	Cat & operator=(const Cat & rhs);

	void makeSound() const;
	
	~Cat();
};

#endif
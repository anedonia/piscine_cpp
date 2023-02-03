/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:02 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/03 16:39:49 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int nb): _nb(nb)
{
	return;
}

Fixed::Fixed(const Fixed &inst)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = inst;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}
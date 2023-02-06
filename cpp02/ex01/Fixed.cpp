/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:02 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/06 20:45:23 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = (nb << _fPart);
	return;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = int(roundf(nb * (1 << _fPart)));
	return;
}

Fixed::Fixed(const Fixed &inst)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = inst;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->_nb);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
	return;
}

float Fixed::toFloat( void ) const
{
	float tmp;
	tmp = float(this->_nb) / (1 << _fPart);
	return(tmp);
}

int Fixed::toInt( void ) const
{
	return (this->_nb >> this->_fPart);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
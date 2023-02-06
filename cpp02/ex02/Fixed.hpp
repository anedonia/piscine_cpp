/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:00 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/06 20:32:49 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:

	int	_nb;
	static const int _fPart = 8;
	
public:
	Fixed(void);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed & inst);
	~Fixed();

	Fixed & operator=(Fixed const  & rhs);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif
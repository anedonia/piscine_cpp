/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:00 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/07 15:43:46 by ldevy            ###   ########.fr       */
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

	
	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;

	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);

	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);

	Fixed & operator=(Fixed const  & rhs);
	
	//op comp
	bool operator>(Fixed const  & rhs);
	bool operator<(Fixed const  & rhs);
	bool operator>=(Fixed const  & rhs);
	bool operator<=(Fixed const  & rhs);
	bool operator==(Fixed const  & rhs);
	bool operator!=(Fixed const  & rhs);
	
	//op math
	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);

	//op incre
	Fixed & operator++(void);
	Fixed operator++(int);
	Fixed & operator--(void);
	Fixed operator--(int);
	
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif
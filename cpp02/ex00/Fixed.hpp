/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:00 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/06 20:27:16 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:

	int	_nb;
	static const int _fPart = 8;
	
public:
	Fixed(void);
	Fixed(const Fixed & inst);
	~Fixed();

	Fixed & operator=(Fixed const  & rhs);
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
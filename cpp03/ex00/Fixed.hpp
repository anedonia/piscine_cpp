/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:35:00 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/03 14:40:55 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:

	int	_nb;
	static const int _raw;
	
public:
	Fixed(void);
	Fixed(int nb);
	Fixed(const Fixed & inst);
	~Fixed();
	
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};




#endif
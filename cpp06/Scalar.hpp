/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/02 13:02:59 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>

class Scalar
{
private:
	enum _etype {_char, _int, _float, _double} _type;
	const std::string	_str;
	char 				_chartype;
	int					_inttype;
	double				_doubletype;
	float				_floattype;

public:
	Scalar(const std::string str);
	Scalar(const Scalar & inst);
	
	Scalar & operator=(const Scalar & inst);
	~Scalar();

	class InvalidEntry : std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Invalid data entry");
		}
	};
};




#endif
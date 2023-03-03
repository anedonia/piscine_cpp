/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:13 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/02 13:43:39 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <cmath>
#include <limits>


Scalar::Scalar(std::string str): _str(str)
{
	if (str.empty())
		throw InvalidEntry();
	else if (str.length() == 1)
	{
		if (isdigit(str.front()))
		{
			_inttype = static_cast<int>(strtol(str.c_str(), NULL, 10));
			_type = _int;
		}
		else
		{
			_chartype = str.front();	
			_type = _char;
		}
	}
	else
	{
		char * endPtrlong;
		long nb_long = strtol(str.c_str(), &endPtrlong, 10);
		char * endPtrdouble;
		double nb_double = strtod(str.c_str(), &endPtrdouble);
		if (*endPtrlong)
		{
			if (*endPtrdouble == 'f')
			{
				_type = _float;
				_floattype = static_cast<float>(nb_double);
			}
			else 
			{
				_type = _double;
				_floattype = static_cast<double>(nb_double);
			}
		}
		else 
		{
			if (nb_long > std::numeric_limits<int>:: )
		}
	}
	
}

Scalar::~Scalar()
{
}

Scalar::Scalar(const Scalar & inst)
{
}

Scalar &Scalar::operator=(const Scalar &inst)
{	
}
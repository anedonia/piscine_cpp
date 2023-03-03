/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:13 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/03 20:39:57by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <limits>

//comment gérer les nan inf etc ? directement par parsing ou je laisse les cast se faire avec les valeurs inf etc ?
//les nan et inf sont géré par strtof/d
//il faut une classe ScalarConverter
//et une methode convert prend en param la representation str 
ScalarConverter::ScalarConverter(std::string str): _str(str)
{
	convert(_str);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string str)
{
	if (str.empty())
		throw InvalidEntry();
	else if (str.length() == 1)
	{
		if (isdigit(str.c_str()[0]))
		{
			_inttype = static_cast<int>(strtol(str.c_str(), NULL, 10));
			_type = _int;
		}
		else
		{
			_chartype = str.c_str()[0];
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
			if (nb_long > std::numeric_limits<int>::max() || nb_long < std::numeric_limits<int>::min())
				throw InvalidEntry();
			else
			{
				_type = _int;
				_inttype = static_cast<int>(nb_long);
			}
		}
	} 
}

ScalarConverter::ScalarConverter(const ScalarConverter & inst): _str(inst._str)
{
	*this = inst;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &inst)
{
	if (this != &inst)
	{
		switch (inst._type)
		{
		case _int:
			_inttype = inst._inttype;
			break;
		case _float:
			_floattype = inst._floattype;
			break;
		case _double:
			_doubletype = inst._doubletype;
			break;
		case _char:
			_chartype = inst._chartype;
			break;
		}
	}
	return *this;
}

char ScalarConverter::toChar()
{
	char tmp;
	switch (_type)
	{
		case _int:
			if (_inttype > std::numeric_limits<char>::max() || _inttype < std::numeric_limits<char>::min())
				throw NotPrintableValue();
			else
				tmp = static_cast<char>(_inttype);
		break;
		case _float:
			if ( std::isnan(_floattype) || _floattype > std::numeric_limits<char>::max() || _floattype < std::numeric_limits<char>::min())
				throw NotPrintableValue();
			else
				tmp = static_cast<char>(_floattype);
		break;
		case _double:
			if ( std::isnan(_doubletype) || _doubletype > std::numeric_limits<char>::max() || _doubletype < std::numeric_limits<char>::min())
				throw NotPrintableValue();
			else
				tmp = static_cast<char>(_doubletype);
		break;
		case _char:
			tmp = _chartype;
		break;
	}
	if (!isprint(tmp)) //a ete changé
		throw NotPrintableValue();
	else 
		return (tmp);
}

int ScalarConverter::toInt()
{
	switch (_type)
	{
		case _int:
			return _inttype;
		break;
		case _float:
			if (std::isnan(_floattype) || _floattype > std::numeric_limits<int>::max() || _floattype < std::numeric_limits<int>::min())
				throw NotPrintableValue();
			else 
				return static_cast<int>(_floattype);
		break;
		case _double:
			if (std::isnan(_floattype) || _floattype > std::numeric_limits<int>::max() || _floattype < std::numeric_limits<int>::min())
				throw NotPrintableValue();
			else	
				return static_cast<int>(_doubletype);
		break;
		case _char:
			return static_cast<int>(_chartype);
		break;
	}
	return (0);
}
double ScalarConverter::toDouble()
{
	switch (_type)
	{
		case _int:
			return static_cast<double>(_inttype);
		break;
		case _float:
			return static_cast<double>(_floattype);
		break;
		case _double:
			return _doubletype;
		break;
		case _char:
			return static_cast<double>(_chartype);
		break;
	}
	return (0);
}

float ScalarConverter::toFloat()
{
	switch (_type)
	{
		case _int:
			return static_cast<float>(_inttype);
		break;
		case _float:
			return _floattype;
		break;
		case _double:
			return static_cast<float>(_doubletype);
		break;
		case _char:
			return static_cast<float>(_chartype);
		break;
	}
	return (0);
}

void ScalarConverter::printConvertion()
{
	try
	{
		std::cout << "char : ";
		_chartype = toChar();
		std::cout << _chartype << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "int : ";
		_inttype = toInt();
		std::cout << _inttype << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	try
	{
		std::cout << "float : ";
		_floattype = toFloat();
		std::cout << _floattype << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	try
	{
		std::cout << "double : ";
		_doubletype = toDouble();
		std::cout << _doubletype << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
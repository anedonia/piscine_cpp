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
#include <iomanip>

ScalarConverter::ScalarConverter(const std::string &str): _str(str)
{

}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(std::string str)
{
	if (str.empty())
		throw InvalidEntry();
	if (str.length() == 1)
	{
		if (isdigit(str.c_str()[0]))
		{
			this->_inttype = static_cast<int>(strtol(str.c_str(), NULL, 10));
			this->_type = _int;
		}
		else
		{
			this->_chartype = str.c_str()[0];
			this->_type = _char;
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
			if ( nb_double == 0 && nb_long == 0 && str.find(".") == std::string::npos)
				throw InvalidEntry();
			if (*endPtrdouble)
			{
				if (*endPtrdouble == 'f')
				{
					this->_type = _float;
					_floattype = static_cast<float>(nb_double);
				}
				else
					throw InvalidEntry();
			}
			else
			{
				this->_type = _double;
				this->_doubletype = nb_double;
			}
		}
		else 
		{
			if (nb_long > std::numeric_limits<int>::max() || nb_long < std::numeric_limits<int>::min())
				throw InvalidEntry();
			else
			{
				this->_type = _int;
				this->_inttype = static_cast<int>(nb_long);
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
				throw NotPrintableValueChar();
			else
				tmp = static_cast<char>(_inttype);
		break;
		case _float:
			if (std::isinf(_floattype) || std::isnan(_floattype) || _floattype > std::numeric_limits<char>::max() || _floattype < std::numeric_limits<char>::min())
				throw NotPrintableValue();
			else
				tmp = static_cast<char>(_floattype);
		break;
		case _double:
			if (std::isinf(_doubletype) || std::isnan(_doubletype) || _doubletype > std::numeric_limits<char>::max() || _doubletype < std::numeric_limits<char>::min())
				throw NotPrintableValue();
			else
				tmp = static_cast<char>(_doubletype);
		break;
		case _char:
			tmp = _chartype;
		break;
	}
	if (!isprint(tmp)) 
		throw NotPrintableValueChar();
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
			if (std::isinf(_floattype) || std::isnan(_floattype) || _floattype > std::numeric_limits<int>::max() || _floattype < std::numeric_limits<int>::min())
				throw NotPrintableValue();
			else 
				return static_cast<int>(_floattype);
		break;
		case _double:
			if (std::isinf(_doubletype) || std::isnan(_doubletype) || _doubletype > std::numeric_limits<int>::max() || _doubletype < std::numeric_limits<int>::min())
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
		char c;
		std::cout << "char : ";
		c = this->toChar();
		std::cout << "'" << c << "'" << std::endl;
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
		if (ceilf(_floattype) == _floattype)
			std::cout << std::fixed << std::setprecision(1) << _floattype << "f" << std::endl;
		else 
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
		if (ceil(_doubletype) == _doubletype)
			std::cout << std::fixed << std::setprecision(1) << _doubletype << std::endl;
		else 
			std::cout << _doubletype << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	ScalarConverter::getDataTest()
{
	std::cout << _type + "   " << _doubletype << " : " + _str << std::endl;
}
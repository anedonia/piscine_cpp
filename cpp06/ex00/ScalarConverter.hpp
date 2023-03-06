/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:08:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/06 18:36:20 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>

class ScalarConverter
{
private:
	enum _etype {_char, _int, _float, _double} _type;
	const std::string	_str;
	char 				_chartype;
	int					_inttype;
	double				_doubletype;
	float				_floattype;

public:
	ScalarConverter(const std::string & str);
	ScalarConverter(const ScalarConverter & inst);
	
	ScalarConverter & operator=(const ScalarConverter & inst);
	~ScalarConverter();

	void	convert(std::string str);
	char	toChar();
	int		toInt();
	double	toDouble();
	float	toFloat();
	void	printConvertion();
	void	getDataTest();
	
	class InvalidEntry : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Invalid data entry");
		}
	};
	class NotPrintableValue : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Impossible");
		}
	};
	class NotPrintableValueChar : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Non displayable");
		}
	};
};

#endif
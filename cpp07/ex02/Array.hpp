/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:29:05 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/08 21:42:05 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _size;
	T * _arr;
public:

	Array();
	Array(unsigned int N);
	Array(const Array & inst);

	~Array();
	
	Array & operator=(const Array & inst);
	T & operator[](unsigned int i);

	unsigned int size();
	
	class NoAccess : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Cannot be accessed");
		}
	};
};

#include "Array.tpp"

#endif
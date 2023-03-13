/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:59:15 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/13 13:27:55 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <vector>
#include <iostream>

class Span
{
private:
	unsigned int		_size;
	std::vector<int>	_vec;
	Span();
public:
	Span(unsigned int N);
	Span(const Span & inst);
	Span & operator=(const Span & inst);
	
	~Span();
	void addNumber(int i);
	int	shortestSpan() const;
	int longestSpan() const;

	class VectorFull : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return("vector max-out already");
		}
	};
	
	class VectorTooFewElements : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return("Too few elements for a span");
		}
	};
};




#endif
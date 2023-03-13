/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:02:58 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/13 18:13:09 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N): _size(N)
{
}

Span::Span(const Span & inst)
{
	*this = inst;
}

Span & Span::operator=(const Span & inst)
{
	if (&inst != this)
	{
		_size = inst._size;
		_vec = inst._vec;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber (int i)
{
	if (_vec.size() < _size)
		_vec.push_back(i);
	else 
		throw VectorFull(); // a tester si on fill au max ou non
}

int	Span::shortestSpan() const
{
	std::vector<int> tmp = _vec;
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	max = std::max_element(tmp.begin(), tmp.end());
	min = std::min_element(tmp.begin(), tmp.end());
	
	return std::abs(*max - *min);
}

int	Span::longestSpan () const
{
	
}
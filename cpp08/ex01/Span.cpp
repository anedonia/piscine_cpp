/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:02:58 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/14 12:45:24 by ldevy            ###   ########.fr       */
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
	if (_vec.size() < 2)
		throw VectorTooFewElements();
	
	std::vector<int> tmp = _vec;
	int ret;

	std::sort(tmp.begin(), tmp.end());
	
	for (size_t i = 1; i < tmp.size(); i++) 
	{ 
		if(i == 1 || tmp[i] - tmp[i - 1] < ret) 
			ret = tmp[i] - tmp[ i - 1]; 
	}
	return (ret);
}

int	Span::longestSpan () const
{
	if (_vec.size() < 2)
		throw VectorTooFewElements();
	std::vector<int> tmp = _vec;
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	max = std::max_element(tmp.begin(), tmp.end());
	min = std::min_element(tmp.begin(), tmp.end());
	
	return std::abs(*max - *min);
}

std::vector<int> Span::getVec() const
{
	return _vec;
}

unsigned int Span::size() const
{
	return _size;
}

std::ostream & operator<<(std::ostream & o, const Span & inst)
{
	std::vector<int> tmp = inst.getVec();
	for (unsigned int i = 0; i < inst.size(); i++)
	{
		o << tmp[i];
		o << " - ";
	}
	return o;
}


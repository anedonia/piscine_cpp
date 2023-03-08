/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:57:00 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/08 22:27:39 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
Array<T>::Array() : _size(0), _arr(new T[0])
{
}

template <typename T>
Array<T>::Array(unsigned int N): _size(N), _arr(new T[N]())
{
}

template <typename T>
unsigned int Array<T>::size()
{
	return _size;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T>
Array<T>::Array(const Array &inst)
{
	_size = inst._size;
	_arr = new T[inst._size];
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = inst._arr[i];
	*this = inst;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array &inst)
{
	if (this != &inst)
	{
		delete[] _arr;
		_size = inst._size;
		_arr = new T[inst._size];
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = inst._arr[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i > _size)
		throw NoAccess();
	else
		return _arr[i];
}
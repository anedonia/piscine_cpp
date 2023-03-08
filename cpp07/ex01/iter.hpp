/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:54:44 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/07 14:30:23 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void iter(T *ptr, int N, void (*p) (T))
{
	for (int i = 0; i < N; i++)
		(*p)(ptr[i]);
}

template<typename T>
void print(T inst)
{
	std::cout << inst << std::endl;
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:14:06 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/10 21:20:44 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ESAYFIND_HPP
#define ESAYFIND_HPP
#include <algorithm>

class NotFound : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Not found in array");
		}
};

template <typename T>
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator c = find(a.begin(), a.end(), b);
	if (c == a.end())
		throw NotFound();
	else
		return (c);
}


#endif
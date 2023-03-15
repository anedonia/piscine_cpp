/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:27:47 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/14 16:04:30 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() {};
	MutantStack<T, Container>(const MutantStack<T, Container> & inst){
		*this = inst;
	};
	MutantStack<T, Container> & operator=(const MutantStack<T, Container> & inst) {
		if (this != &inst)
			*this = inst;
		return *this;
	};
	virtual ~MutantStack() {};

	typedef typename Container::iterator				iterator;

	iterator begin() { return this->c.begin(); };
	iterator end() { return this->c.end(); };
};

#endif
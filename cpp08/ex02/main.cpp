/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:23:40 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/14 16:05:13 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top element : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "taille de la stack : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::cout << "-----------------------------------------" << std::endl;
	
	MutantStack<std::string> strstack;
	strstack.push("lol");
	strstack.push("bonjour");
	std::cout << "top element : " << strstack.top() << std::endl;
	strstack.pop();
	std::cout << "taille de la stack : " << strstack.size() << std::endl;
	strstack.push("comment");
	strstack.push("ca");
	strstack.push("va");
	strstack.push("moi cest ok");
	MutantStack<std::string>::iterator it2 = strstack.begin();
	MutantStack<std::string>::iterator ite2 = strstack.end();
	
	++it2;
	--it2;
	
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}

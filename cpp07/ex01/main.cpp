/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:15:38 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/07 14:29:26 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>


int main()
{
	float tab[4] = {2.4f, 21.212f, 0.2222f, 88.909f};
	double tabd[4] = {2.4, 21.212, 0.2222, 88.909};
	int tabi[4] = {2, 21, 0, 88};
	std::string tabs[4] = {"lol", "mdr", "yoooo", "based"};
	char tabc[4] = { 'a', 'b', 'c', 'd'};

	std::cout << "-------------------------------------------" << std::endl;
	iter<float>(tab, 4, print<float>);
	std::cout << "-------------------------------------------" << std::endl;
	iter<double>(tabd, 4, print<double>);
	std::cout << "-------------------------------------------" << std::endl;
	iter<int>(tabi, 4, print<int>);
	std::cout << "-------------------------------------------" << std::endl;
	iter<std::string>(tabs, 4, print<std::string>);
	std::cout << "-------------------------------------------" << std::endl;
	iter<char>(tabc, 4, print<char>);
	std::cout << "-------------------------------------------" << std::endl;
}
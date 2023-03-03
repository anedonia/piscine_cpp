/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:05:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/03 21:02:54 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid inputs" << std::endl;	
		return (0);
	}
	std::string str = argv[1];
	
	ScalarConverter nb(str);
	nb.printConvertion();
}
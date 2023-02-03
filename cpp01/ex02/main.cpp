/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:17:16 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/19 20:58:49 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string local;
	std::string *stringPTR;
	std::string &stringREF = local;
	
	local = "HI THIS IS BRAIN";
	stringPTR = &local;

	std::cout << "addr de local :    " << &local << std::endl;
	std::cout << "addr de stringPTR :" << stringPTR << std::endl;
	std::cout << "addr de stringREF :" << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "string            :" << local << std::endl;
	std::cout << "string depuis ptr :" << *stringPTR << std::endl;
	std::cout << "string depuis ref :" << stringREF << std::endl;
}
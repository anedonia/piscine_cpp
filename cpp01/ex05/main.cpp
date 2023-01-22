/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:12:16 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/22 18:33:07 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl karen;
	
	if (argc != 2)
	{
		std::cout << "For Harl to complain you must tell him what about : DEBUG, INFO, WARNING, ERROR or ALL" << std::endl;
		return(1);
	}
	karen.complain(argv[1]);
	return (0);
}
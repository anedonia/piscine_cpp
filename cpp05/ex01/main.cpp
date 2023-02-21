/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:54:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/21 17:47:32 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main (void)
{

	try 
	{
		Bureaucrate jean(157, "louis");
		Bureaucrate david(0, "david");


		Bureaucrate louis(149, "louis");
		Bureaucrate mike(2, "mike");
		
		std::cout << louis << std::endl;
		std::cout << mike << std::endl;

		mike.increment();
		mike.increment();
		
		louis.decrement();
		louis.decrement();
		
		std::cout << louis << std::endl;
		std::cout << mike << std::endl;

		
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);	
}

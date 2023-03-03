/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:54:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/23 16:00:22 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main (void)
{
	Bureaucrate louis(10, "louis");
	Bureaucrate grunt(140, "grunt");
	
	std::cout << grunt << std::endl;
	try 
	{
		Form contrat("contrat", 15, 10);
		Form badcrt("wrong", 0, 100);
		Form badcrt2("wrong", 10, 1100);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Form contrat("contrat", 15, 10);
	std::cout << contrat << "  " << louis << std::endl;

	try
	{
		louis.signForm(contrat);
		std::cout << contrat << std::endl;
		grunt.signForm(contrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		
	
	return (0);	
}

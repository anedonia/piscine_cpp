/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:54:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/27 14:05:5 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main (void)
{
	Bureaucrate boss(1, "boss");
	Bureaucrate louis(10, "louis");
	Bureaucrate grunt(150, "grunt");

	Form one("one", "", 1, 150);
	Form two("two", "", 10, 150);
	Form three("three", "", 150, 150);
	
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	grunt.signForm(one);	
	grunt.signForm(two);	
	grunt.signForm(three);
		
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.signForm(one);	
	louis.signForm(two);
	louis.signForm(three);

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	boss.signForm(one);	
	boss.signForm(two);
	boss.signForm(three);

	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;

	return (0);	
}

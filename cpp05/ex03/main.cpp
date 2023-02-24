/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:54:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 23:37:17 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main (void)
{
	srand(time(NULL));
	Bureaucrate boss(1, "boss");
	Bureaucrate louis(10, "louis");
	Bureaucrate grunt(150, "grunt");

	Intern nameless;

	Form *one;
	Form *two;
	Form *three;
	Form *four;
	
	try
	{
		std::cout << "|------------------------------------------------------------------|" << std::endl;
		one = nameless.makeForm("robot", "terminator");
		std::cout << "|------------------------------------------------------------------|" << std::endl;
		two = nameless.makeForm("pardon", "cyprien");
		std::cout << "|------------------------------------------------------------------|" << std::endl;
		three = nameless.makeForm("jardin", "Babylone");
		std::cout << "|------------------------------------------------------------------|" << std::endl;

		std::cout << "|------------------------------------------------------------------|" << std::endl;
		four = nameless.makeForm("jan", "Babylone");
		(void)four;
		std::cout << "|------------------------------------------------------------------|" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(*one);
	louis.executeForm(*two);
	louis.executeForm(*three);

	grunt.executeForm(*one);
	grunt.executeForm(*two);
	grunt.executeForm(*three);

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	grunt.signForm(*one);	
	grunt.signForm(*two);	
	grunt.signForm(*three);
		
	louis.signForm(*one);	
	louis.signForm(*two);
	louis.signForm(*three);

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	grunt.executeForm(*one);
	grunt.executeForm(*two);
	grunt.executeForm(*three);
	
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(*one);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(*two);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(*three);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	
	boss.executeForm(*one);
	boss.executeForm(*two);
	boss.executeForm(*three);
	std::cout << "|------------------------------------------------------------------|" << std::endl;

	delete one;
	delete two;
	delete three;
	
	return (0);	
}

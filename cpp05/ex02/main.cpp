/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:54:34 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 22:10:49 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/includes.hpp"

int main (void)
{
	srand(time(NULL));
	Bureaucrate boss(1, "boss");
	Bureaucrate louis(10, "louis");
	Bureaucrate grunt(150, "grunt");
	
	RobotomyRequestForm bot("wall-E");
	PresidentialPardonForm dinde("michelle");
	ShrubberyCreationForm green_peace("jardin");

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(bot);
	louis.executeForm(dinde);
	louis.executeForm(green_peace);

	grunt.executeForm(bot);
	grunt.executeForm(dinde);
	grunt.executeForm(green_peace);

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	grunt.signForm(bot);	
	grunt.signForm(dinde);	
	grunt.signForm(green_peace);
		
	louis.signForm(bot);	
	louis.signForm(dinde);
	louis.signForm(green_peace);

	std::cout << "|------------------------------------------------------------------|" << std::endl;
	grunt.executeForm(bot);
	grunt.executeForm(dinde);
	grunt.executeForm(green_peace);
	
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(bot);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(dinde);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	louis.executeForm(green_peace);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	
	boss.executeForm(bot);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	boss.executeForm(dinde);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	boss.executeForm(green_peace);
	std::cout << "|------------------------------------------------------------------|" << std::endl;
	return (0);	
}

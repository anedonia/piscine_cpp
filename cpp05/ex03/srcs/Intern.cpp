/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:39:09 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/27 14:24:24 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Intern::Intern()
{
	std::cout << "intern has been birthed to the world (ewww)" << std::endl;
}

Intern::~Intern()
{
	std::cout << "byebye you the nameless" << std::endl;
}

Intern::Intern(const Intern & inst)
{
	*this = inst;
	std::cout << "Did you know we could clone you ?" << std::endl;
}

Intern & Intern::operator=(const Intern & inst)
{
	(void)inst;
	return *this;
}

Form * Intern::makeForm(const std::string name, const std::string target)
{
	std::string tab [] = 
	{
		"robot",
		"pardon",
		"jardin"
	};
	int i = 0;
	while (i < 3)
	{
		if (tab[i] == name)
			break;
		i++;
	}
	Form * ret;
	switch (i)
	{
	case 0:
		ret = new RobotomyRequestForm(target);
		break;
	case 1:
		ret = new PresidentialPardonForm(target);
		break;	
	case 2:
		ret = new ShrubberyCreationForm(target);
		break;
	default:
		throw Intern::FormNotFoundExeption();
	}
	std::cout << "Intern creates " + name << std::endl;
	return(ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:27:26 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/20 13:45:51 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Bureaucrate::Bureaucrate(): _name("default"), _grade(150)
{
	std::cout << "Default constructor" << std::endl;
}

Bureaucrate::~Bureaucrate()
{
	std::cout << "Default destructor" << std::endl;
}

Bureaucrate::Bureaucrate(int grade, const std::string name): _name(name), _grade(grade)
{
	std::cout << "Name and Grade constructor" << std::endl;
}

Bureaucrate::Bureaucrate(const Bureaucrate & inst)
{
	std::cout << "Copy constructor" << std::endl;
	_name = inst._name;
	_grade = inst._grade;
	*this = inst;
}
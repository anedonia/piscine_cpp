/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:52:08 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:52:27 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("robot","", 72, 45)
{
	std::cout << "RobotomyRequestForm : default constructor" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
Form("robot", target, 72, 45)
{
	std::cout << "RobotomyRequestForm : data constructor" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & inst): Form(inst)
{
	std::cout << "RobotomyRequestForm : copy constructor" << std::endl;	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & inst)
{
	this->Form::operator=(inst);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm : default destructor" << std::endl;	
}

void RobotomyRequestForm::action(const Bureaucrate & inst) const
{
	Form::execute(inst);
	std::cout << "Bzzzz Bzzz clunck BZZZZ BZZ" << std::endl;
	if (rand() % 2 > 0)
		std::cout << "Great success !! " + this->getTarget() + " was robotized" << std::endl;
	else 
		std::cout << "Operation failed" << std::endl;
}
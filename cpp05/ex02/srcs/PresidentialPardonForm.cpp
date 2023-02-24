/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:46:16 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:52:15 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("pardon","", 25, 5)
{
	std::cout << "PresidentialPardonForm : default constructor" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
Form("pardon", target, 25, 5)
{
	std::cout << "PresidentialPardonForm : data constructor" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & inst): Form(inst)
{
	std::cout << "PresidentialPardonForm : copy constructor" << std::endl;	
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & inst)
{
	this->Form::operator=(inst);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : default destructor" << std::endl;	
}

void PresidentialPardonForm::action(const Bureaucrate & inst) const
{
	Form::execute(inst);
	std::cout << this->getTarget() + "has been forgiven by : Zaphod Beeblebrox." << std::endl;
}
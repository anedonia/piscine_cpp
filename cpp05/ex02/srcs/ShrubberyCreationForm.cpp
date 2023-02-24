/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:54:42 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 22:18:05 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("shruberry","", 145, 137)
{
	std::cout << "ShrubberyCreationForm : default constructor" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
Form("shruberry", target, 145, 137)
{
	std::cout << "ShrubberyCreationForm : data constructor" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & inst): Form(inst)
{
	std::cout << "ShrubberyCreationForm : copy constructor" << std::endl;	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & inst)
{
	this->Form::operator=(inst);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm : default destructor" << std::endl;	
}

void ShrubberyCreationForm::action(const Bureaucrate & inst) const
{
	Form::execute(inst);
	std::ofstream my_file;
	std::string name;
	
	name = this->getTarget();
	if (name.empty())
		name = "default";
	name.append("_shrubbery");
	my_file.open(name.data());
	if (my_file.is_open())
	{
		my_file << "       _-_\n";
		my_file << "    /~~   ~~\"\n";
		my_file << " /~~         ~~\\\n";
		my_file << "{               }\n";
		my_file << " \\  _-     -_  /\n";
		my_file << "   ~  \\\\ //  ~\n";
		my_file << "_- -   | | _- _\n";
		my_file << "  _ -  | |   -_\n";
		my_file << "      // \\\\\n";
	}
	else 
		std::cout << "Could open file" << std::endl;
	my_file.close();
	
}
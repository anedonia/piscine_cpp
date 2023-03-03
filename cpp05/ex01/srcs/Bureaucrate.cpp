/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:27:26 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/03 14:38:04 by ldevy            ###   ########.fr       */
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

Bureaucrate::Bureaucrate(int grade, const std::string name): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else 
	{
		_grade = grade;
		std::cout << "Name and Grade constructor" << std::endl;
	}
}

Bureaucrate::Bureaucrate(const Bureaucrate & inst)
{
	std::cout << "Copy constructor" << std::endl;
	*this = inst;
}

Bureaucrate & Bureaucrate::operator=(const Bureaucrate & inst)
{
	if (this != &inst)
	{
		//_name = inst._name;
		_grade = inst._grade;
	}
	return *this;
}

int Bureaucrate::getGrade() const 
{
	return _grade;
}

std::string Bureaucrate::getName() const
{
	return (_name);
}

void Bureaucrate::increment()
{
	if (_grade <= 1)
		throw (Bureaucrate::GradeTooHighException());
	else 
		_grade--;
}

void Bureaucrate::decrement()
{
	if (_grade >= 150)
		throw (Bureaucrate::GradeTooLowException());
	else 
		_grade++;
}

void Bureaucrate::signForm(Form & inst) const
{
	try
	{
		inst.beSigned(*this);
		std::cout << _name + " signed " + inst.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name + " couldn't sign " + inst.getName() + " because " << e.what() << '\n';
	}
	
}

std::ostream & operator<<(std::ostream& o, const Bureaucrate & inst)
{
	o << inst.getName() + " ";
	o << inst.getGrade();
	return o;
}

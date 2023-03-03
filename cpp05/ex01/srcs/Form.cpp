/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:57:45 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/03 14:38:47 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

Form::Form(): _name("default"), _target(""), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form : default constructor" << std::endl;
}

Form::Form(std::string name, std::string target, unsigned int signg, unsigned int execg): _name(name), 
_target(target), _isSigned(false), _gradeToSign(signg), _gradeToExecute(execg)
{
	if (signg > 150 || execg > 150)
		throw GradeTooLowException();
	if (signg < 1 || execg < 1)
		throw GradeTooHighException();
	std::cout << "Form : data constructor" << std::endl;
}

Form::Form(const Form & inst): _name(inst._name), _target(inst._target),_isSigned(inst._isSigned),
 _gradeToSign(inst._gradeToSign), _gradeToExecute(inst._gradeToExecute)
{
	std::cout << "Form : copy constructor" << std::endl;
}

Form & Form::operator=(const Form & inst)
{
	(void)inst;
	return *this;
}

Form::~Form()
{
	std::cout << "Form : default destructor" << std::endl;
}

unsigned int Form::getToSign() const
{
	return _gradeToSign;
}

unsigned int Form::getToExecute() const
{
	return _gradeToExecute;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

std::string Form::getName() const
{
	return _name;	
}

std::string	Form::getTarget() const
{
	return _target;
}

void Form::beSigned(const Bureaucrate &inst)
{
	if (inst.getGrade() > (int)_gradeToSign)
		throw GradeTooLowException();
	else 
		_isSigned = true;
}

std::ostream & operator<<(std::ostream & o, const Form & inst)
{
	o << inst.getName() + " singned : \"" << inst.getIsSigned() << "\" level required to sign " << inst.getToSign() << " level to execute " << inst.getToExecute();	
	return o;
}
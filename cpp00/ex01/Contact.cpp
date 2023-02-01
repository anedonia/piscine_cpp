/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:40:19 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/01 15:16:18 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::get_fname(void) const
{
	return(this->f_name);
}

bool Contact::set_f_name(std::string fn)
{
	if (fn.empty())
		return (false);
	this->f_name = fn;
	return (true);
}

std::string Contact::get_lname(void) const
{
	return(this->l_name);	
}

bool Contact::set_l_name(std::string ln)
{
	if (ln.empty())
		return(false);
	this->l_name = ln;
	return(true);
}

std::string Contact::get_nname(void) const
{
	return(this->n_name);
}

bool Contact::set_n_name(std::string nm)
{
	if (nm.empty())
		return(false);
	this->n_name = nm;
	return(true);
}

std::string Contact::get_phone_nb(void) const
{
	return(this->phone_nb);	
}

bool Contact::set_phone_nb(std::string nb)
{
	if (nb.empty())
		return(false);
	this->phone_nb = nb;
	return(true);
}

std::string Contact::get_secret(void) const
{
	return(this->secret);
}

bool Contact::set_secret(std::string se)
{
	if (se.empty())
		return(false);
	this->secret = se;
	return(true);
}

void	Contact::print_info(void) const
{
	std::cout << "|" << std::setw (10) << this->index << "|";
	std::cout << std::setw (10) << trim(this->f_name) << "|";
	std::cout << std::setw (10) << trim(this->l_name) << "|";
	std::cout << std::setw (10) << trim(this->n_name) << "|" << std::endl;
}

void	Contact::print_full_info(void) const
{
	std::cout << this->index << std::endl;
	std::cout << this->f_name << std::endl;
	std::cout << this->l_name << std::endl;
	std::cout << this->n_name << std::endl;
	std::cout << this->phone_nb << std::endl;
	std::cout << this->secret << std::endl;
}
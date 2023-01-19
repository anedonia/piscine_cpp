/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:18:18 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/18 18:04:09 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

PhoneBook::PhoneBook():c_nb(0), full(false)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

Contact PhoneBook::get_Contact(int index)
{
	return(this->list[index % 8]);
}

bool PhoneBook::set_Contact(Contact inst)
{
	if (this->c_nb > 7)
		this->full = true;
	this->list[this->c_nb % 8] = inst;
	this->c_nb++;
	return (true);
}

int PhoneBook::get_c_nb(void) const
{
	return(this->c_nb);
}

bool PhoneBook::set_c_nb(int i)
{
	this->c_nb = i;
	return(true);
}

int PhoneBook::get_full(void) const
{
	return(this->full);
}

int	Contact::get_index(void) const
{
	return (this->index);	
}

bool Contact::set_index(int i)
{
	this->index = i;
	return(true);
}

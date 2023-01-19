/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:56:33 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/18 18:52:50 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int main(void)
{
	bool run = true;
	std::string		param;
	PhoneBook		rep;
	
	while (run)
	{
		std::cout << "Please enter a command :" << std::endl;
		getline(std::cin, param);
		if (param == "ADD" || param == "SEARCH")
			display(param, &rep);
		else if (param == "EXIT")
			run = false;
		else 
			std::cout << "The valid arguments are -ADD- -SEARCH- or -EXIT-" << std::endl;
	}
}

//doit avoir le PhoneBook pour le remplir au fur et a mesure
void	display(std::string arg, PhoneBook *rep)
{
	if (arg == "ADD")
		add_fct(rep);
	else 
		search_fct(*rep);
}

//doit return le la nouvelle instance de contact
Contact *add_fct(PhoneBook *rep)
{
	Contact	nouveau;
	std::string tmp;
	
	std::cout << "let's create a new contact\n" << "First name :" << std::endl;
	getline(std::cin, tmp);
	if (!nouveau.set_f_name(tmp))
	{
		std::cout << "INVALID DATA" << std::endl;
		return(NULL);
	}
	std::cout << "Last name :" << std::endl;
	getline(std::cin, tmp);
	if (!nouveau.set_l_name(tmp))
	{
		std::cout << "INVALID DATA" << std::endl;
		return(NULL);
	}
	std::cout << "Nickname :" << std::endl;
	getline(std::cin, tmp);
	if (!nouveau.set_n_name(tmp))
	{
		std::cout << "INVALID DATA" << std::endl;
		return(NULL);
	}
	std::cout << "Phone number :" << std::endl;
	getline(std::cin, tmp);
	if (!nouveau.set_phone_nb(tmp))
	{
		std::cout << "INVALID DATA" << std::endl;
		return(NULL);
	}
	std::cout << "Deepest darkest secret :" << std::endl;
	getline(std::cin, tmp);
	if (!nouveau.set_secret(tmp))
	{
		std::cout << "INVALID DATA" << std::endl;
		return(NULL);
	}
	nouveau.set_index(rep->get_c_nb() % 8);
	rep->set_Contact(nouveau);
	std::cout << "Data entry complete.... Contact added" << std::endl;
	return(NULL);
}

//a besoin du PhoneBook et ne renvoie rien
void	search_fct(PhoneBook rep)
{
	int size;
	int index;

	if (rep.get_c_nb() == 0)
	{
		std::cout << "You don't have any contacts at the moment" << std::endl;
		return;
	}
	if (rep.get_full())
		size = 8;
	else 
		size = rep.get_c_nb();
	std::cout << "available contacts :" << std::endl;
	for (int i = 0; i < size; i++)
		rep.get_Contact(i).print_info();
	std::cout << "select a contact to lookup : 0 - max" << std::endl;
	while (!(std::cin >> index) || index < 0 || index > size -1)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "invalid index please enter a correct value" << std::endl;
	}
	rep.get_Contact(index).print_full_info();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

std::string trim(std::string str)
{
	if (str.size() >= 10)
		return(str.substr(0,9) + ".");
	return(str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:55:35 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/13 19:10:13 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include <string>


class Contact
{
	public:
		std::string get_fname(void) const;
		bool set_f_name(std::string fn);

		std::string get_lname(void) const;
		bool set_l_name(std::string fn);

		std::string get_nname(void) const;
		bool set_n_name(std::string fn);

		std::string get_phone_nb(void) const;
		bool set_phone_nb(std::string fn);

		std::string get_secret(void) const;
		bool set_secret(std::string fn);

		int	get_index(void) const;
		bool set_index(int i);

		void print_info(void) const;
		void print_full_info(void) const;

	private:
		std::string	f_name;
		std::string	l_name;
		std::string	n_name;
		std::string	phone_nb;
		std::string	secret;
		int			index;
};

class PhoneBook
{
	public: 

		PhoneBook();
		~PhoneBook();

		bool set_Contact(Contact inst);
		Contact get_Contact(int index);

		bool set_c_nb(int i);
		int get_c_nb(void) const;

		int get_full(void) const;

	private:
		Contact list[8];
		int		c_nb;
		bool	full;
};

#endif
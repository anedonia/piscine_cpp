/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:55:35 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/12 12:11:26 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

class Contact
{
    public:
        char	*f_name;
        char	*l_name;
        char	*n_name;
		char	*phone_nb;
	private:
		char	*secret;
};

class PhoneBook
{
	Contact list[8];
	// ADD();
	// SEARCH();
	// EXIT();
};

#endif
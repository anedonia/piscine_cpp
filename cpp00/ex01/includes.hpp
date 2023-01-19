/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:46:09 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/18 18:36:53 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_HPP
#define INCLUDES_HPP
#include "classes.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

void		search_fct(PhoneBook inst);
Contact		*add_fct(PhoneBook *inst);
void		display(std::string arg, PhoneBook *rep);
std::string	trim(std::string);
#endif
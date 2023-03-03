/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:05:43 by ldevy             #+#    #+#             */
/*   Updated: 2023/03/01 18:21:50 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	std::string str = argv[1];
	
	Scalar nb(str);
	
}
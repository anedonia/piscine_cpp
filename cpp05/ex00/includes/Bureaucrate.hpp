/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:55:59 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/20 13:44:42 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

class Bureaucrate
{
private:
	const std::string	_name;
	int					_grade;
	
public:
	Bureaucrate();
	~Bureaucrate();
	Bureaucrate(int grade, const std::string name);
	Bureaucrate(const Bureaucrate & inst);
	
	Bureaucrate & operator=(const Bureaucrate & inst);
	
};



#endif
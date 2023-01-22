/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:13:58 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/22 18:29:41 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>

class Harl
{
private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	
public:

	Harl();
	~Harl();

	void complain( std::string level );

};

#endif
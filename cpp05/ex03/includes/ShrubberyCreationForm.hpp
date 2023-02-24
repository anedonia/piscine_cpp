/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:42:13 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:52:11 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
public:

	ShrubberyCreationForm(const ShrubberyCreationForm & inst);
	ShrubberyCreationForm(const std::string target);
	
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & inst);
	~ShrubberyCreationForm();
	
	void action(const Bureaucrate& inst) const;
};
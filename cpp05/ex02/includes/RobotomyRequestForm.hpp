/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:51:26 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:51:57 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
public:

	RobotomyRequestForm(const RobotomyRequestForm & inst);
	RobotomyRequestForm(const std::string target);
	
	RobotomyRequestForm & operator=(const RobotomyRequestForm & inst);
	~RobotomyRequestForm();
	
	void action(const Bureaucrate& inst) const;
};
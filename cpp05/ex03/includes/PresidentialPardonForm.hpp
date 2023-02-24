/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:45:33 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:52:04 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
public:

	PresidentialPardonForm(const PresidentialPardonForm & inst);
	PresidentialPardonForm(const std::string target);
	
	PresidentialPardonForm & operator=(const PresidentialPardonForm & inst);
	~PresidentialPardonForm();
	
	void action(const Bureaucrate& inst) const;
};



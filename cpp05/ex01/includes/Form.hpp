/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:58:49 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/23 16:42:08 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrate;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExecute;
	
public:
    Form();
    Form(std::string name, unsigned int signg, unsigned int execg);
    Form(const Form & inst);
	
    ~Form();

	Form & operator=(const Form & inst);

	void			beSigned(const Bureaucrate & inst);
	unsigned int	getToSign() const;
	unsigned int	getToExecute() const;
	bool			getIsSigned() const;
	std::string		getName() const;

	class GradeTooHighException : public std::exception
	{

	public:
		virtual const char * what() const throw()
		{
			return ("Form : Grade is too high exception");
		}
	};
	
	class GradeTooLowException : public std::exception
	{

	public:
		virtual const char * what() const throw()
		{
			return ("Form : Grade is too low exception");
		}
	};
	
};

std::ostream & operator<<(std::ostream& o, const Form & inst);



#endif
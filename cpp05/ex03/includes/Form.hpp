/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:58:49 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 21:40:01 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrate;

class Form
{
private:
	const std::string _name;
	const std::string _target;
	bool _isSigned;
	const unsigned int _gradeToSign;
	const unsigned int _gradeToExecute;
	Form();
	
public:

    Form(std::string name, std::string target, unsigned int signg, unsigned int execg);
    Form(const Form & inst);
    virtual ~Form();

	Form & operator=(const Form & inst);

	void			beSigned(const Bureaucrate & inst);
	unsigned int	getToSign() const;
	unsigned int	getToExecute() const;
	bool			getIsSigned() const;
	std::string		getName() const;
	std::string		getTarget() const;
	virtual void 	action(const Bureaucrate & inst) const = 0;
	void 			execute(Bureaucrate const & executor) const;

	class GradeTooHighException : public std::exception
	{

	public:
		virtual const char *what() const throw()
		{
			return ("Form : Grade is too high exception");
		}
	};

	class GradeTooLowException : public std::exception
	{

	public:
		virtual const char *what() const throw()
		{
			return ("Form : Grade is too low exception");
		}
	};
	class FormNotSignedException : public std::exception
	{
		
	public:
		virtual const char *what() const throw()
		{
			return ("Form : Isn't signed :/");
		}
	};
};

std::ostream & operator<<(std::ostream& o, const Form & inst);



#endif
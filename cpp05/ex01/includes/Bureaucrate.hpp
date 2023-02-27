/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:55:59 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 15:24:44 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

class Form;

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
	
	//get
	std::string getName() const;
	int getGrade() const;
	
	//member fct
	void increment();
	void decrement();
	void signForm(Form & inst) const;
	void executeForm(Form const & form) const;
	

	class GradeTooHighException : public std::exception
	{
		public: 
			virtual const char * what() const throw()
			{
				return ("Bureaucrate : Grade is already maxed out");
			}
	};
	
	class GradeTooLowException : public std::exception
	{
		public: 
			virtual const char * what() const throw()
			{
				return ("Bureaucrate : Grade is already minimal");
			}
	};

	
	
};

std::ostream & operator<<(std::ostream& o, const Bureaucrate & inst);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 22:39:24 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/24 23:08:23 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Intern
{
private:
	
public:
	Intern();
	Intern(const Intern & inst);
	Intern & operator=(const Intern & inst);
	~Intern();
	Form * makeForm(const std::string name, const std::string target);

	class FormNotFoundExeption : public std::exception
	{
		public: 
			virtual const char * what() const throw()
			{
				return ("Intern : no match in name library");
			}
	};
};



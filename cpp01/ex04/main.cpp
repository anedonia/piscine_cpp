/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:42:25 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/21 18:42:46 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string s1, s2, filename;
	
	if (argc < 4)
	{
		std::cout << "Incorret number of args." << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream in_file(filename.data());
	if (in_file.bad())
	{
		std::cout << "Something strange happened with the file." << std::endl;
		return (2);
	}
	if (in_file.peek() == EOF)
	{
		std::cout << "Error file is empty" << std::endl;
		return (3);
	}
	else 
	{
		std::ofstream out_file (filename.append(".replace").data());
		while (in_file.good() && out_file.good())
		{
			std::string line;
			std::size_t pos;
			getline (in_file, line);
			pos = line.find(s1);
			while (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos = line.find(s1, pos);
			}
			out_file << line;
			if (in_file.eof())
				break;
			out_file << std::endl;
		}
		out_file.close();
	}
	
	in_file.close();
}

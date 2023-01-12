/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:04:24 by ldevy             #+#    #+#             */
/*   Updated: 2023/01/11 19:58:37 by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...";

    for (i = 1; i < argc; i++)
    {
		for(size_t j = 0; j < strlen(argv[i]); j++)
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
    }
    std::cout << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:34:17 by ldevy             #+#    #+#             */
/*   Updated: 2023/02/14 14:09:12by ldevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* bad = new WrongAnimal();
const WrongAnimal* badcat = new WrongCat();
std::cout << bad->getType() << " " << std::endl;
std::cout << badcat->getType() << " " << std::endl;
bad->makeSound(); 
badcat->makeSound();

delete bad;
delete badcat;
delete i;
delete j;
delete meta;
return 0;
}
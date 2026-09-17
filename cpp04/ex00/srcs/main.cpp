/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:37:08 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 18:56:23 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "*** constructors ***" << std::endl;
	const Animal* meta = new Animal();
	const WrongAnimal* j = new WrongCat();
	const Animal* i = new Dog();
	const Animal* k = new Cat();
	std::cout << std::endl << "*** type ***" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << std::endl << "*** sounds ***" << std::endl;
	i->makeSound(); 
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	
	return 0;
}
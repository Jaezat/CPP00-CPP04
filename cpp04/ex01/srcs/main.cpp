/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:37:08 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/27 11:16:43 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int n = 6;
	const Animal *pets[n];
	
	for(int i = 0; i < n / 2; i++)
		pets[i] = new Cat();
	for(int i = n / 2; i < n; i++)
		pets[i] = new Dog();


	for (int i = 0; i < n; i++)
	{
		std::cout << "Animal: " << pets[i]->getType() << std::endl;
		pets[i]->makeSound();
	}

	for(int i = 0; i < n; i++)
		delete pets[i];

	return 0;
}
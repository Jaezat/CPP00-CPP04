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
	/* int n = 6;
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
		delete pets[i]; */

	Dog original;
	
	original.setIdea(0, "chase the mailman");
	Dog copy(original);
	
	original.setIdea(0, "slept all day");
	if (original.getIdea(0) != copy.getIdea(0))
		std::cout << "Success: Deep copy done." << std::endl;
	else
		std::cout << "Failure: Shallow copy detected." << std::endl;

	std::cout << "***********************" << std::endl;
	std::cout << "Original: " << original.getIdea(0) << std::endl;
	std::cout << "Copy: " << copy.getIdea(0) << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:37:08 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/27 12:55:40 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* Dog d;
	d.makeSound();
	
	AAnimal *pet = new Dog;
	pet->makeSound();
	std::cout << pet->getType() << std::endl;

	delete pet; */

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
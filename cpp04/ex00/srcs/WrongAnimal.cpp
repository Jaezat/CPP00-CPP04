/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:33:33 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 18:59:03 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() { std::cout << "Wrong Animal default constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called" << std::endl; }

void WrongAnimal::makeSound() const { std::cout << "Muuuuuuu I'm a cow!" << std::endl; }

std::string WrongAnimal::getType() const 
{
	return type;
}
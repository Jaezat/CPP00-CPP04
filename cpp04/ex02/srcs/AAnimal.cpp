/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 12:53:09 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/27 12:53:21 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal parameterized constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	if (this != &other)
		*this = other;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "I don't which Aanimal I am but I promess I am one!" << std::endl;
}

std::string AAnimal::getType() const
{
	return type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 11:44:34 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/27 12:53:59 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : type("Dog")
{ 
	std::cout << "Dog default constructor called" << std::endl; 
	this->type = "Dog";
	this->dogBrain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->dogBrain = new Brain(*other.dogBrain);
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		delete this->dogBrain;
		this->dogBrain = new Brain(*other.dogBrain);
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog() 
{ 
	std::cout << "Dog destructor called" << std::endl; 
	delete this->dogBrain;	
}

void Dog::makeSound() const { std::cout << "Woof woof! I'm a dog! " << std::endl; }

void Dog::setIdea(int index, std::string idea)
{
	if(this->dogBrain)
		this->dogBrain->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const
{
	if (this->dogBrain)
		return this->dogBrain->ideas[index];
	return "";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:17:48 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 20:47:46 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::Cat(const Cat& other) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->catBrain = new Brain(*other.catBrain);
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->catBrain = new Brain(*other.catBrain);
		this->type = other.type;
	}
	return *this;
}

Cat::~Cat()
{ 
	std::cout << "Cat destructor called" << std::endl;
	delete this->catBrain;
}

void Cat::makeSound() const { std::cout << "Meooooow I'm a cat I swear!" << std::endl; }

void Cat::setIdea(int index, std::string idea)
{
	if (index < 0 || index > 100)
		return ;
	else if(this->catBrain)
		this->catBrain->ideas[index] = idea;
}

std::string Cat::getIdea(int index) const
{
	if (this->catBrain)
		return this->catBrain->ideas[index];
	return "";
}
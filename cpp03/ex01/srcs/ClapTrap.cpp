/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 06:54:10 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 18:22:56 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0)
	{
		std::cout << "No hit points left :(" << std::endl;
		return ;
	}
	else if (this->energyPoints == 0)
	{
		std::cout << "No energy points left :(" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= static_cast<unsigned int>(this->hitPoints))
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;	
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! (Points left: " << this->hitPoints << ")" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
    {
        std::cout << "No hit points left :(" << std::endl;
        return;
    }
    if (this->energyPoints == 0)
    {
        std::cout << "No energy points left :(" << std::endl;
        return;
    }
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " regains " << amount << " hit points! Yay :D" << std::endl;
}
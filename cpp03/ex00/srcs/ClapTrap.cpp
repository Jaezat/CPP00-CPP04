/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 06:54:10 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 11:16:45 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
	this->energyPoints = 10;
	this->hitPoints = 10;
	this->attackDamage = 0;
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
	if (amount >= this->hitPoints)
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
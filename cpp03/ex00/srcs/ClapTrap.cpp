/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 06:54:10 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:53:14 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(CLAP_HP), energyPoints(CLAP_EP), attackDamage(CLAP_AD)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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
	std::cout << "ClapTrap destructor called" << std::endl;
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
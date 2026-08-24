/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 06:54:10 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 07:20:15 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	this->name = name;
}

~ClapTrap() 
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
	this->hitPoints = this->hitPoints - this->attackDamage;
	std::cout << "Claptrap " << target << ", causing " << this->attackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	this->hitPoints = this->hitPoints - amount;
	std::cout << "Claptrap" << this->name << ", causing " << amount << "points of damage!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints = this->hitPoints + amount;
	std::cout << "ClapTrap" << this->name << "regains " << amount << "hit points! Yay :D" << std::endl;
}
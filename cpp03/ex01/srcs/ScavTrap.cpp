/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:16:37 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:46:06 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in gatekeeper mode." << std::endl;
}


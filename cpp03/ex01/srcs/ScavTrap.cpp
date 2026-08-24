/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:16:37 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 18:28:21 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* #define SCAV_HP 100
#define SCAV_EP 50
#define SCAV_AD 20 */

ScavTrap::ScavTrap() : ClapTrap("default", SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other.name, other.hitPoints, other.energyPoints, other.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->name << "is now in gatekeeper mode." << std::endl;
}


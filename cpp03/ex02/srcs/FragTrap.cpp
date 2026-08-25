/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 09:27:28 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 09:38:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, FRAG_HP, FRAG_EP, FRAG_AD)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "After all, " << this->name << " is requesting a positive high-five! Only good vibes around here!" << std::endl;
}


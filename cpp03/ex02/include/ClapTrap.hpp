/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 06:50:51 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 09:42:49 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define CLAP_HP 10
#define CLAP_EP 10
#define CLAP_AD 0

class ClapTrap 
{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int ad);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
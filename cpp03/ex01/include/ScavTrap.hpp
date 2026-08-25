/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:16:27 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:45:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define SCAV_HP 100
#define SCAV_EP 50
#define SCAV_AD 20

class ScavTrap: public ClapTrap 
{
	public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap& other);
			ScavTrap& operator=(const ScavTrap& other);
			~ScavTrap();
			
			void attack(const std::string& target);
			void guardGate();
};

#endif
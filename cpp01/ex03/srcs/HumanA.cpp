/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:29:54 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/15 15:43:51 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& newWp) : _name(name), _WpA(newWp) {}

HumanA::~HumanA() {};

void HumanA::attack()
{
    std::cout << _name << _WpA.getType() << std::endl; 
}

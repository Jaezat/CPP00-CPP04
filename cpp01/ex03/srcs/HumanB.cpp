/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:30:00 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/15 15:51:39 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(const std::string& name)
{
    _name = name;
}

HumanB::~HumanB() {};


void HumanB::attack()
{
    std::cout << _name << " attacks with their " << _WpB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& Weapon)
{
    _WpB = &Weapon;
};

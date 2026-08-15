/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:30:08 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/15 15:51:12 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon() {};


const std::string& Weapon::getType(void) const
{
    return (_type);
}

void Weapon::setType(const std::string& newValue)
{
    _type = newValue;
}




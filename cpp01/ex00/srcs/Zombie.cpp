/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:20:18 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/13 21:04:00 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    std::cout << "Zombie created! Yay!" << std::endl; 
    _name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie destroyed! No :(" << std::endl;
}

void announce(std::string name)
{
    
}



Zombie *newZombie(std::string name)
{
    
}

void randomChump(std::string name)
{
    
}

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
    this->_name = name;
    std::cout << "\033[33mZombie " << _name << " created! Yay!\033[0m" << std::endl;
}

Zombie::~Zombie(void) 
{
    std::cout << "\033[31mZombie " << _name << " destrrrroooyeddd! Muahahahahah!\033[0m" << std::endl;
}

void Zombie::setName(std::string name) 
{
    this->_name = name;
};

std::string Zombie::getName(void)
{
    return (this->_name);
};

void Zombie::announce(void)
{
    std::cout << "\033[34m" << this->_name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}
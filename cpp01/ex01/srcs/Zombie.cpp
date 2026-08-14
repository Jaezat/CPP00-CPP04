/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:20:18 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/14 21:03:25 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{
    std::cout << "\033[38;5;208mZombie created! Yay!\033[0m" << std::endl;
}

Zombie::~Zombie(void) 
{
    std::cout << "\033[31mZombie " << _name << " destrrrroooyeddd! Muahahahahah!\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "\033[34m" << this->_name << ": BraiiiiiiinnnzzzZ..." << "\033[0m" << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->_name = name;
}

const std::string &Zombie::getName() const
{
    return (this->_name);
}

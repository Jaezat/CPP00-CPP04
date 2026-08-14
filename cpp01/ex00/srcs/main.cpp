/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:20:22 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/13 20:20:23 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(void)
{
    std::string name;
    std::cout << "\033[35mPlease tell me a name: \033[0m" << std::endl;
    if(!std::getline(std::cin, name))
        return 1;
    Zombie zb(name);
    Zombie* zb2 = newZombie(name);
    zb2->announce();
    randomChump(name);
    delete zb2;
}
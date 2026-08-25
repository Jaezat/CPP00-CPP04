/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 09:47:06 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please insert a name. " << std::endl << "Example: <program_name> <name_chosen> <another_name>" << std::endl;
		return 1;
	}	
	std::string name = argv[1];
	std::string secName = argv[2];
	FragTrap ft(name);
	
	ft.attack(secName);
	ft.takeDamage(20);
	ft.beRepaired(10);
	ft.highFiveGuys();

	return 0;
}
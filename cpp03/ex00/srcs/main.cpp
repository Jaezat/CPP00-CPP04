/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:54:29 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please insert a name and a target. " << std::endl << "Example: <program_name> <name> <target>" << std::endl;
		return 1;
	}	
	std::string name = argv[1];
	std::string secName = argv[2];
	
	ClapTrap cp(name);
	
	cp.attack(secName);
	cp.takeDamage(3);
	cp.beRepaired(5);

	return 0;	
}
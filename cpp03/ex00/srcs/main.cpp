/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 10:59:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please insert a name. " << std::endl << "Example: <program_name> <name_chosen>" << std::endl;
		return 1;
	}	
	std::string name = argv[1];
	
	ClapTrap cp(name);
	
	
	cp.attack("Enemy");
	cp.takeDamage(3);
	cp.beRepaired(5);

	return 0;	
}
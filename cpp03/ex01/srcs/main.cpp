/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:54:39 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please insert a name and a target. " << std::endl << "Example: <program_name> <name> <target>" << std::endl;
		return 1;
	}	
	std::string name = argv[1];
	std::string secName = argv[2];
	
	ScavTrap st(name);
	
	st.attack(secName);
	st.takeDamage(10);
	st.beRepaired(5);
	st.guardGate();

	return 0;
}
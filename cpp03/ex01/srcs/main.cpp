/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/25 10:47:00 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please insert a name. " << std::endl << "Example: <program_name> <name_chosen> <another_name>" << std::endl;
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
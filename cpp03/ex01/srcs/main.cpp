/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 18:29:36 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please insert a name. " << std::endl << "Example: <program_name> <name_chosen>" << std::endl;
		return 1;
	}	
	std::string name = argv[1];
	
	ScapTrap st;
	
	st.attack("Bola");
	st.takeDamage(3);
	st.beRepaired(5);

	return 0;	
}
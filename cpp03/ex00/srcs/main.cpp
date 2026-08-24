/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 07:12:17 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 07:16:31 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "claptrap.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;
		
	std::string name = argv[1];
	
	ClapTrap cp(name);
	
	cp.attack("Enemy");
	cp.takeDamage(3);
	cp.beRepaired(5);

	return 0;	
}
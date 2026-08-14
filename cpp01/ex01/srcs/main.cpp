/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 20:15:25 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/14 21:00:18 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int main()
{
    long n;
    std::string name;

    std::cout << "\033[95mPlease insert a name for the zombies: \033[0m" << std::endl;
    if(!std::getline(std::cin, name))
        return 1;
    std::cout << std::endl << "\033[95mPlease choose the size of the horde: \033[0m" << std::endl;
        std::cin >> n;
    if (std::cin.fail() || n > INT_MAX || n <= 0)
    {
        std::cout << "Please insert a different input." << std::endl << std::endl;
        return 1;
    }
    
    Zombie *zombieH = zombieHorde(static_cast<int>(n), name);
    if(!zombieH)
        return 1;
        
    for(int i = 0; i < n; i++)
        zombieH[i].announce();
    
    delete[] zombieH;
    
    return 0; 
}
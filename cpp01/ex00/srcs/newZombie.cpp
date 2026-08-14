/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:59:07 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/13 21:06:14 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* zb = new Zombie(name);

    return zb;
}

/*
esta funcion es una funcion que retorna una puntero aun objeto zombie

en esta funcion lo que tenemos que hacer es crear un zombie en el heap
y que siga existiendo despues de que la funcion termine

entonces que hago?
1. Creo un zombie usando new
2. new returns a pointer to that object. 
3. Objeto tiene que vivir en el heap.
4. 
*/



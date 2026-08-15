/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:30:03 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/15 15:32:58 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>


class HumanB
{
    private:
        std::string _name;
        Weapon *_WpB;
        
    public:
        // const
        HumanB(const std::string& name);
        ~HumanB();

        void attack();
        void setWeapon(Weapon& Weapon);
};


#endif
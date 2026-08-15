/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:30:11 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/15 15:50:06 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>


class Weapon
{
    private:
        std::string _type;
        
    public:
        // const
        Weapon(const std::string& type);
        // destruct
        ~Weapon();
        // getter
            const std::string& getType(void) const;
        // setter
            void setType(const std::string& newValue);
};

    
#endif
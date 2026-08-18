/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 11:29:58 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/17 13:30:07 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>



class HumanA
{
    private:
        std::string _name;
        Weapon& _WpA;

    public:
        // const
        HumanA(const std::string name, Weapon& newWp);
        ~HumanA();
        
        void attack();
};


#endif
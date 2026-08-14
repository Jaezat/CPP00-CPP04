/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:20:15 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/13 21:03:44 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
    
    private:
        std::string _name;
        
    public:
        Zombie(std::string name);
        ~Zombie();
        
        // setters
        void setName(std::string name);

        // getters
        std::string getName(void);

        void announce(void);
};



#endif 
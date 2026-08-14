/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 20:09:05 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/14 20:09:06 by mariacos         ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        void announce(void);

        // setters
        void setName(const std::string &name);
        
        // getter
        const std::string &getName(void) const;
        
};



#endif 
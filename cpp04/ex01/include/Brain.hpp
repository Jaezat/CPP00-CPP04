/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:18:32 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 19:39:46 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain 
{
	private:
		std::string ideas[100];
	public: 
		Brain();
		Brain(const Brain& other);
		Brain& operator=(const Brain& other);
		~Brain();
	
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
};

#endif

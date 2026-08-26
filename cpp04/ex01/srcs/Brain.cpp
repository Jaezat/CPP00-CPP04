/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:40:30 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 19:41:41 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { std::cout << "Brain default constructor called" << std::endl; }

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

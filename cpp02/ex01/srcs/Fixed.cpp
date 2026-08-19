/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 12:28:59 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/19 12:48:44 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
	_rawValue = 0;
	std::cout << "Default constructor called" << std::endl;
}
			
Fixed::Fixed(const Fixed& p) 
{ 
	std::cout << "Copy constructor called" << std::endl;
	*this = p;
}
			
Fixed& Fixed::operator=(const Fixed& p) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &p)
		this->_rawValue = p.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destuctor called" << std::endl;
};




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 12:28:59 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/20 17:51:35 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() 
{
	_rawValue = 0;
	std::cout << "Default constructor called" << std::endl;
};
	
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


Fixed::Fixed(const int num)
{
	// needs to convert num to the corresponding fixed point value
	this->_rawValue = num << _fractBits;
};

Fixed::Fixed(const float num)
{
	int n = roundf(num);
	_rawValue = n << _fractBits;
}

// recordar que tengo que hacer esto tb:

float toFloat(void) const 
int toInt(void) const;


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 19:10:22 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/19 12:13:01 by mariacos         ###   ########.fr       */
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
	this->_rawValue = p._rawValue;
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

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawValue = raw;
}

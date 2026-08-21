/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 12:28:59 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/21 16:28:16 by mariacos         ###   ########.fr       */
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
			
Fixed& Fixed::operator=(const Fixed& p) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &p)
		this->_rawValue = p._rawValue;
	return *this;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawValue = num << this->_fractBits;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawValue = roundf(num * (1 << this->_fractBits));
	/*  1. scales the float by multiplying by 256
	 2. round it to the nearest integer with roundf()
	 3. stores that integer as the raw fixed point value */
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _rawValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_rawValue = raw;
}

float Fixed::toFloat(void) const
{
	float tmp = this->_rawValue / (float)(1 << this->_fractBits);
	return tmp;
}

int Fixed::toInt(void) const
{
	int tmp = this->_rawValue >> this->_fractBits;
	return tmp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
	out << f.toFloat();
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:00:23 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/23 18:16:46 by mariacos         ###   ########.fr       */
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
	this->_rawValue = num << this->_fractBits; // equivalent to num * 256
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

/* ************************* */

// Here i need to define 6 comparison operators:
// 1. ==
bool Fixed::operator==(const Fixed& p) const
{
	return _rawValue == p._rawValue;
}

// 2. !=
bool Fixed::operator!=(const Fixed& p) const
{
	return _rawValue != p._rawValue;
}

// 3. >

bool Fixed::operator>(const Fixed& p) const
{
	return _rawValue > p._rawValue;
}

// 4. <

bool Fixed::operator<(const Fixed& p) const
{
	return _rawValue < p._rawValue;
}

// 5. >=

bool Fixed::operator>=(const Fixed& p) const
{
	return _rawValue >= p._rawValue;
}

// 6. <=

bool Fixed::operator<=(const Fixed& p) const
{
	return _rawValue <= p._rawValue;
}

// Here I need 4 arithmetic operators:
// 1. +

Fixed Fixed::operator+(const Fixed& p) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + p.getRawBits);
	return result;
}

// 2. -

Fixed Fixed::operator-(const Fixed& p) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - p.getRawBits);
	return result;
}

//  3. *

Fixed Fixed::operator*(const Fixed& p) const
{
	return Fixed(this->toFloat() * p.toFloat());
}

// 4. /

Fixed Fixed::operator/(const Fixed& p) const
{
	return Fixed(this->toFloat() / p.toFloat());
}



// Here i need 4 increment/decrement

// 1. Pre-increment (++var)

Fixed Fixed::operator


// ++val -> +1 -> val
// val++ -> val -> + 1
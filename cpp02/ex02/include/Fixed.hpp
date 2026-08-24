/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:57:48 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/24 06:41:16 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	private:
		int 				_rawValue;
		static const int 	_fractBits = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& p);
		Fixed& operator=(const Fixed& p);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits (int const raw);
		float toFloat(void) const; // this converts fixed point to float
		int toInt(void) const; // this converts fixed point to int

		bool operator==(const Fixed& p) const;
		bool operator!=(const Fixed& p) const;
		bool operator>(const Fixed& p) const;
		bool operator<(const Fixed& p) const;
		bool operator>=(const Fixed& p) const;
		bool operator<=(const Fixed& p) const;
		Fixed operator+(const Fixed& p) const;
		Fixed operator-(const Fixed& p) const;
		Fixed operator*(const Fixed& p) const;
		Fixed operator/(const Fixed& p) const;
		
		Fixed& operator++();
		Fixed operator++(int num);
		Fixed& operator--();
		Fixed operator--(int num);
		
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);


#endif
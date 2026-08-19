/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 12:28:40 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/19 12:45:20 by mariacos         ###   ########.fr       */
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

		float tofloat(void) const;
		int toInt(void) const;
};

/* class Fixed {
	private:
		int 				_rawValue;
		static const int 	_fractBits = 8;

	public:
		Fixed();
		Fixed(const Fixed& p);
		Fixed& operator=(const Fixed& p);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits (int const raw);
		
}; */



#endif
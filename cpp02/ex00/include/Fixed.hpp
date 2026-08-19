/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 19:10:29 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/19 11:47:41 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
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
		
};

#endif

		

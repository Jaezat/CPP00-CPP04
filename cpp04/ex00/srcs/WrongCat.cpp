/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:33:11 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/26 18:50:29 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() { std::cout << "WrongCat default constructor called" << std::endl; }

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called" << std::endl; }

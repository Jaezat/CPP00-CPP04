/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 09:39:30 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/13 11:23:14 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void lowerToUpper(const char **str)
{
	for (int i = 1; str[i]; i++)
	{
		std::string	arg = str[i];
		for(size_t j = 0; j < arg.length(); j++)
			std::cout << (char)std::toupper(arg.at(j));
		std::cout << ' ';
	}
	std::cout << std::endl;
}

int main(int argc, const char **argv)
{
	const char *str;

	str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (argc > 1)
		lowerToUpper(argv);
	else
		std::cout << str;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 09:39:30 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/03 15:32:51 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void lowerToUpper(const char **str)
{
	int i;
	int j;
	char c;

	i = 1;
	j = 0;
	while(str[i]) // use a function instead 
	{
		j = 0;
		while(str[i][j])
		{
			std::cout << (char)std::toupper((unsigned char)c);
			j++;
		}
		i++;
	}
}

int main(int argc, const char **argv) // arguments in stream do not use **argv
{
	const char *str;

	str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	if (argc > 1)
		lowerToUpper(argv);
	else
		std::cout << str;
	return 0;
}

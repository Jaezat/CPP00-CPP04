/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:21:50 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/16 17:15:19 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Please insert the correct inputs:" << std::endl;
        std::cout << "<filename> <sentence> <sentence>" << std::endl;
        return 1;
    }
    std::string     fileName = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::string     text;
    std::ifstream   inStream(argv[1]);
    std::ofstream   outStream(fileName + ".replace");
    char            c;
    
    while (inStream.get(c))
        text += c;
    std::cout << text;
    
    /* here analyze the text 
    For that I have:
    - string 1 and string 2
    - i need to be able to find string 1 in text
    - replace string 1 by string 2
    - do that for all text
    - add that text into new file*/
    
    
    
}
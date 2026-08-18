/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:21:50 by mariacos          #+#    #+#             */
/*   Updated: 2026/08/16 18:52:41 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Please insert the correct input:" << std::endl;
        std::cout << "<filename> <sentence> <sentence>" << std::endl;
        return 1;
    }
    std::string     fileName = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::string     ext = ".replace";
    std::string     text;
    std::ifstream   inStream(argv[1]);
    if (!inStream.is_open())
    {
        std::cerr << "Error: Could not open or read file '" << fileName << "'." << std::endl;
        return 1;
    }

    std::ofstream   outStream((fileName + ".replace").c_str());
    if (!outStream.is_open())
    {
        std::cerr << "Error: Could not open or read file '" << fileName << "'." << std::endl;
        return 1;
    }

    char            c;
    while (inStream.get(c))
        text += c;    
    size_t pos;
    pos = 0;
    while(true)
    {
        pos = text.find(s1, pos);
        if(pos != std::string::npos)
        {
            text.erase(pos, s1.length());
            text.insert(pos, s2);
        }
        else
            break;
    }
    outStream << text;
}
#include <iostream>
#include <string>
#include "PhoneBook.hpp"

std::string askInput(const std::string& prompt)
{
    std::string text = "";

    while (text.empty())
    {
        std::cout << prompt;

        if (!std::getline(std::cin, text))
            break;
        
        if (text.empty())
        {
            std::cout << "Error: espace is empty. Try again.\n";
        }
    }
    return text;
}



void PhoneBook::addContact()
{
    int i;

    std::string firstName = askInput("First Name: ");
    std::string lastName = askInput("Last Name: ");
    std::string nickName = askInput("Nick Name: ");
    std::string firstName = askInput("First Name: ");


    
}
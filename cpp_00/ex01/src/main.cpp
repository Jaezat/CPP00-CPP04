#include "../include/PhoneBook.hpp"

# include <iostream>

int main()
{
    std::string input;
    PhoneBook   phoneBook;

    PhoneBook::printWelcomeMessage();
    while (true)
    {
        PhoneBook::printSearchMessage();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (!phoneBook.addContact())
                std::cout << "\nContact added!\n" << std::endl;
            continue;
        }
        else if (input == "SEARCH")
        {
            if (phoneBook.getTotal() == 0)
            {
                std::cout << "Phonebook is empty. Add a contact." << std::endl;
                continue;
            }
            else
            {
                PhoneBook::printTable(&phoneBook);
                if (!phoneBook.search())
                    std::cout << "Contact not found." << std::endl;
            }
        }
        else
        {
            if (PhoneBook::isLowerCase(input))
            {
                std::cout << std::endl << "Please add option in UPPERCASE." << std::endl;
                continue;
            }
            if (input == "EXIT")
            {
                std::cout << "Bye bye!" << std::endl;
                break;
            }
        }
    }
}
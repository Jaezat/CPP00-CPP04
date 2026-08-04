#include <iostream>
#include <string>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

// Constructor: Directly adding the value 0 to total
PhoneBook::PhoneBook() : _total(0) {}

// Destructor: Automatically executed when obj stops existing (main is done for ex)
PhoneBook::~PhoneBook() {}

std::string truncateStr(std::string const &str)
{
    if (str.length() > 10)
        return (str.substr(0,9) + ".");
    return (str);
}

void PhoneBook::addContact(Contact const &c)
{
    contacts[_total % 8] = c;
    _total++;
}

void PhoneBook::searchContact() const
{
    int index;
    int occupiedSpace;
    std::string input;
    
    // check how many contacts we have saved already
    if (_total < 8)
        occupiedSpace = _total;
    else
        occupiedSpace = 8;

    if (occupiedSpace == 0)
    {
        std::cout << "No contacts saved yet." << std::endl;
        return;
    }

    /* go through the table and print the information  */
    for (int i = 0; i < occupiedSpace; i++)
    {
        /*  this helps to print in the table format 
            setwidth -> ensures every column in formatted at fixed width */ 
        std::cout << "|" << std::setw(10) << std::right << i
                  << "|" << std::setw(10) << std::right << truncateStr(contacts[i].getFirstName())
                  << "|" << std::setw(10) << std::right << truncateStr(contacts[i].getLastName())
                  << "|" << std::setw(10) << std::right << truncateStr(contacts[i].getNickName())
                  << "|" << std::endl;                 
    }
    
    std::cout << "Enter index to display: ";
    std::getline(std::cin, input);

    // here we convert the str input into numbers by putting it into the stream
    std::stringstream ss(input);
    ss > index;

    if (index < 0 || index >= occupiedSpace)
    {
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

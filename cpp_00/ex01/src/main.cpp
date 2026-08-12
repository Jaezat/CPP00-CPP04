#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

# include <iostream>
# include <iomanip>

int hasWhiteSpaces(std::string input)
{
    size_t i = 0;
    size_t total = 0;
    while(input[i])
    {
        if(input[i] == ' ' || input[i] == '\t')
            total++;
        i++;
    }
    if (total == input.length())
        return 1;
    return 0;
}

int checkIfEmpty(std::string input)
{
    if(input.empty() || hasWhiteSpaces(input))
        return 1;
    return 0;
}

int promptUserInfo(PhoneBook *phoneBook) {

    int index = phoneBook->total % 8;
    std::string* input[] = {
        &phoneBook->contacts[index].FirstName,
        &phoneBook->contacts[index].LastName,
        &phoneBook->contacts[index].NickName,
        &phoneBook->contacts[index].PhoneNumber,
        &phoneBook->contacts[index].DarkestSecret,
    };
    for (int i = 0; i < phoneBook->sizeArr; i++)
    {
        std::cout << "\n" << phoneBook->inputNeeded[i] << ": ";
        std::getline(std::cin, *input[i]);
        if (checkIfEmpty(*input[i]))
        {
            std::cout << "Empty field detected. Contact cannot be saved. Please start over." << std::endl;
            return 1;
        }
        phoneBook->contacts[i].index = i;
        phoneBook->contacts[i].setIndex(i);
    }
    phoneBook->total++;
    return 0;
}   



std::string truncVal(std::string value)
{
    if (value.length() > 10)
        value = value.substr(0, 9) + ".";
    return value;
}


int chooseIndex(PhoneBook *phoneBook)
{
    std::string index;

    std::cout << "Choose a contact: " << std::endl;
    std::getline(std::cin, index);
    for (int i = 0; i < phoneBook->total; i++)
    {
        if (index == phoneBook->contacts[i].index){
            printHeader(phoneBook);
            printColumn(phoneBook, i);
            return 1;
        }
    }
    return 0;
}


int main()
{
    std::string input;
    PhoneBook   phoneBook;
    
    printWelcomeMessage();
    while(true)
    {
        printSearchMessage();
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (promptUserInfo(&phoneBook))
            std::cout << "\nContact added!\n" << std::endl;
            continue;
        }  
       else if (input == "SEARCH")
       {
            if (phoneBook.total == 0)
            {
                std::cout << "Phonebook is empty. Add a contact." << std::endl;
                continue;
            }
            else
            {
                printTable(&phoneBook);
                if (!chooseIndex(&phoneBook))
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
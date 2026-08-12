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
        std::cout << i;
        phoneBook->contacts[i].index = i;
        std::cout << "HEre";
    }
    phoneBook->total++;
    return 0;
}

void printWelcomeMessage() {
    std::cout << "\n";
    std::cout << "------------------------------------------------------\n";
    std::cout << "\n";
    std::cout << "======================================================\n";
    std::cout << "||                                                  ||\n";
    std::cout << "||          Welcome to the PhoneBook Assistant       ||\n";
    std::cout << "||                                                  ||\n";
    std::cout << "======================================================\n";
    std::cout << "\n";
}

void printSearchMessage()
{
    std::cout << std::endl << "------------------------------------------------------\n";
    std::cout << "Choose an option: ADD, SEARCH, EXIT\n";
    std::cout << "------------------------------------------------------\n";
}

std::string truncVal(std::string value)
{
    if (value.length() > 10)
        value = value.substr(0, 9) + ".";
    return value;
}

void printHeader(PhoneBook *phoneBook)
{
    std::cout << std::endl;
    std::cout << std::setw(10) << "Index" << "|";
    for (int i = 0; i < 4; i++)
    {
        std::cout << std::left;
        std::cout << std::setw(10) << phoneBook->inputNeeded[i] << "|";
        std::cout << std::right;
    }
    std::cout << std::endl;
}

void printColumn(PhoneBook *phoneBook, int i)
{
    std::cout << std::left;
    std::cout << std::setw(10) << truncVal(phoneBook->contacts[i].index) << "|";
    std::cout << std::setw(10) << truncVal(phoneBook->contacts[i].FirstName) << "|";
    std::cout << std::setw(10) << truncVal(phoneBook->contacts[i].LastName) << "|";
    std::cout << std::setw(10) << truncVal(phoneBook->contacts[i].NickName) << "|";
    std::cout << std::right;
}

void printValues(PhoneBook *phoneBook)
{
    std::cout << std::endl;
    for (int i = 0; i < phoneBook->total; i++)
        printColumn(phoneBook, i);
    std::cout << std::endl;
}

void printTable(PhoneBook *phoneBook)
{
    printHeader(phoneBook);
    std::cout << std::string(55, '-') << std::endl;
    printValues(phoneBook);
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

int isLowerCase(std::string input)
{
    for (unsigned long i = 0; i < input.size(); i++)
    {
        if (std::islower(static_cast<unsigned char>(input[i])))
            return 1;
    }
    return 0;
}


int main()
{
    std::string input;
    PhoneBook phoneBook;
    
    printWelcomeMessage();
    while(1)
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
            if (isLowerCase(input))
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
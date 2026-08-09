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
    std::cout << "------------------------------------------------------\n";
    std::cout << "Please choose an option: ADD, SEARCH, EXIT\n";
    std::cout << "------------------------------------------------------\n";
}

void printSheet(PhoneBook *phoneBook)
{
    for (int i = 0; i < phoneBook->sizeArr; i++)
    {
        std::cout << std::left;
        std::cout << std::setw(10) << phoneBook->inputNeeded[i] << "|";
        std::cout << std::right;
        
        
    }
}

int main()
{
    std::string input;
    PhoneBook phoneBook;

    while(1)
    {
        printWelcomeMessage();
        std::getline(std::cin, input); 

        if (input == "ADD")
        {
            if (promptUserInfo(&phoneBook))
                break;
            std::cout << "\nContact added!\n" << std::endl;
        }        
       else if (input == "SEARCH")
       {
        /*1. Show list in 4 columns
            - each column separed by 10 chars
            - if text longer > 10 trucate up until 10 and add "." at the end
         ask the user what they want to see */
        printSheet(&phoneBook);
        /*2. Prompt the user to choose an index */

        /* 3. Show contact chosen:       
            - if index out of range or invalid (!number)
            - if valid: show only the contact */        
       

       }
        /*else (input = EXIT)
        {
        } */




    }

}
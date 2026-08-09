#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

# include <iostream>
# include <iomanip>

int hasWhiteSpaces(std::string input)
{
    int i = 0;
    int total = 0;
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

int promptUserInfo(PhoneBook *PhoneBook) {
    
    std::string* info[]  {
        &PhoneBook->contacts[PhoneBook->total].FirstName,
        &PhoneBook->contacts[PhoneBook->total].LastName,
        &PhoneBook->contacts[PhoneBook->total].NickName,
        &PhoneBook->contacts[PhoneBook->total].PhoneNumber,
        &PhoneBook->contacts[PhoneBook->total].DarkestSecret,
    };

    std::string 

}

void printWelcomeMessage() {
    cout << "======================================================\n";
    cout << "||                                                  ||\n";
    cout << "||          Welcome to the PhoneBook Assistant       ||\n";
    cout << "||                                                  ||\n";
    cout << "======================================================\n";
    cout << "\n";
   cout << "------------------------------------------------------\n";
    cout << "Please choose an option: ADD, SEARCH, EXIT\n";
    cout << "------------------------------------------------------\n";
}



int main()
{
    std::string input;
    PhoneBook phoneBook;

    while(1)
    {
        printWelcomeMessage();
        std::cin >> input;
        
        if (input == "ADD")
        {
            phoneBook.total = 0;

        }
        /* 
        - Prompted to input the information of the new contact one field
        at a time.
        - Once fields have been completed:
            - Add the contact to the phonebook
        - ! a saved contact cant have empty fields.
        */
        // funtion that prompts the user questions and saved them;


        else if (input == "SEARCH")
        /* 
        - Display the saved contacts as a list of 4 colums: index, first name, 
        last name and nickname. 
        - Each column must be 10 characters wide. Pipe char must separate them. 
        Text must be right aligned. Text no longer than the column, must be truncated 
        and the last displayable char must be replaced by a dor (".").
        - Prompt the user again for the index of the entry to display. If index
        is out of range or wrong -> relevant behaviour. 
        - Otherwise display contact information, one field per line.
        */
        else (input = EXIT)
        {
            
        }

            


    }

}
#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

# include <iostream>
# include <iomanip>

int main()
{
    std::string input;
    PhoneBook phoneBook;

    while(1)
    {
        std::cout << "Please choose an option: ADD, SEARCH, EXIT" << endl;
        std::cin >> input;
        
        if (input == "ADD")
        /* 
        - Prompted to input the information of the new contact one field
        at a time.
        - Once fields have been completed:
            - Add the contact to the phonebook
        - ! a saved contact cant have empty fields.
        */
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
#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    total = 0;
    savedCount = 0;
    sizeArr = 5;
    inputNeeded[0] = "First name";
    inputNeeded[1] = "Last name";
    inputNeeded[2] = "Nick Name";
    inputNeeded[3] = "Phone Number";
    inputNeeded[4] = "Darkest Secret";
}

PhoneBook::~PhoneBook(void) {}

int isLowerCase(std::string input)
{
    for (unsigned long i = 0; i < input.size(); i++)
    {
        if (std::islower(static_cast<unsigned char>(input[i])))
            return 1;
    }
    return 0;
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

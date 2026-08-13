#include "../include/PhoneBook.hpp"

static int hasWhiteSpaces(std::string input)
{
    size_t i = 0;
    size_t total = 0;
    while (input[i])
    {
        if (input[i] == ' ' || input[i] == '\t')
            total++;
        i++;
    }
    if (total == input.length())
        return 1;
    return 0;
}

static int checkIfEmpty(std::string input)
{
    if (input.empty() || hasWhiteSpaces(input))
        return 1;
    return 0;
}

static std::string truncVal(std::string value)
{
    if (value.length() > 10)
        value = value.substr(0, 9) + ".";
    return value;
}

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

int PhoneBook::addContact(void)
{
    int index = total % LIMIT;
    std::string value;

    void (Contact::*setters[])(std::string) = {
        &Contact::setFirstName,
        &Contact::setLastName,
        &Contact::setNickName,
        &Contact::setPhoneNumber,
        &Contact::setDarkestSecret
    };

    for (int i = 0; i < sizeArr; i++)
    {
        std::cout << "\n" << inputNeeded[i] << ": ";
        std::getline(std::cin, value);
        if (checkIfEmpty(value))
        {
            std::cout << "Empty field detected. Contact cannot be saved. Please start over." << std::endl;
            return 1;
        }
        (contacts[index].*setters[i])(value);
    }
    contacts[index].setIndex(std::string(1, '0' + index));
    total++;
    if (savedCount < LIMIT)
        savedCount++;
    return 0;
}

int PhoneBook::search(void)
{
    std::string index;

    std::cout << "Choose a contact: " << std::endl;
    std::getline(std::cin, index);
    for (int i = 0; i < savedCount; i++)
    {
        if (index == contacts[i].getIndex())
        {
            printContactDetails(this, i);
            return 1;
        }
    }
    return 0;
}

int PhoneBook::getTotal(void) const { return savedCount; }

int PhoneBook::isLowerCase(std::string input)
{
    for (unsigned long i = 0; i < input.size(); i++)
    {
        if (std::islower(static_cast<unsigned char>(input[i])))
            return 1;
    }
    return 0;
}

void PhoneBook::printHeader(PhoneBook *phoneBook)
{
    std::cout << std::endl;
    std::cout << std::right << std::setw(10) << "Index" << "|";
    for (int i = 0; i < 3; i++)
        std::cout << std::right << std::setw(10) << phoneBook->inputNeeded[i] << "|";
    std::cout << std::endl;
}

void PhoneBook::printColumn(PhoneBook *phoneBook, int i)
{
    std::cout << std::right << std::setw(10) << truncVal(phoneBook->contacts[i].getIndex()) << "|";
    std::cout << std::right << std::setw(10) << truncVal(phoneBook->contacts[i].getFirstName()) << "|";
    std::cout << std::right << std::setw(10) << truncVal(phoneBook->contacts[i].getLastName()) << "|";
    std::cout << std::right << std::setw(10) << truncVal(phoneBook->contacts[i].getNickName()) << "|";
}

void PhoneBook::printValues(PhoneBook *phoneBook)
{
    std::cout << std::endl;
    for (int i = 0; i < phoneBook->savedCount; i++)
    {
        printColumn(phoneBook, i);
        std::cout << std::endl;
    }
}

void PhoneBook::printTable(PhoneBook *phoneBook)
{
    printHeader(phoneBook);
    std::cout << std::string(55, '-') << std::endl;
    printValues(phoneBook);
}

void PhoneBook::printContactDetails(PhoneBook *phoneBook, int i)
{
    std::cout << std::endl;
    std::cout << std::left << std::setw(15) << "First name:" << phoneBook->contacts[i].getFirstName() << std::endl;
    std::cout << std::left << std::setw(15) << "Last name:" << phoneBook->contacts[i].getLastName() << std::endl;
    std::cout << std::left << std::setw(15) << "Nickname:" << phoneBook->contacts[i].getNickName() << std::endl;
    std::cout << std::left << std::setw(15) << "Phone number:" << phoneBook->contacts[i].getPhoneNumber() << std::endl;
    std::cout << std::left << std::setw(15) << "Darkest secret:" << phoneBook->contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::printWelcomeMessage()
{
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

void PhoneBook::printSearchMessage()
{
    std::cout << std::endl << "------------------------------------------------------\n";
    std::cout << "Choose an option: ADD, SEARCH, EXIT\n";
    std::cout << "------------------------------------------------------\n";
}
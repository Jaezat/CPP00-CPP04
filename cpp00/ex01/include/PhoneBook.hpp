#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <string>

# define LIMIT 8

class PhoneBook
{
    private:
        int total;
        int savedCount;
        int sizeArr;
        Contact contacts[LIMIT];
        std::string inputNeeded[5];

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        int         addContact(void);
        int         search(void);
        int         getTotal(void) const;
        static int  isLowerCase(std::string input);
        static void printHeader(PhoneBook *phoneBook);
        static void printColumn(PhoneBook *phoneBook, int i);
        static void printValues(PhoneBook *phoneBook);
        static void printTable(PhoneBook *phoneBook);
        static void printContactDetails(PhoneBook *phoneBook, int i);
        static void printWelcomeMessage();
        static void printSearchMessage();
};

#endif
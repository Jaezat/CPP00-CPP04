#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <string>

class PhoneBook {
public:
    Contact contacts[8];
    int total;
    int savedCount;
    int sizeArr;
    std::string inputNeeded[5];

    PhoneBook();
};

#endif
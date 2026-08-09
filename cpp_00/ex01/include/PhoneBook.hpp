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
    int index;
    int sizeArr;
    std::string inputNeeded[5];

    PhoneBook ()
    {
        total = 0;
        index = 0;
        sizeArr = 5;
        inputNeeded[0] = "First name";
        inputNeeded[1] = "Last name";
        inputNeeded[2] = "Nick Name";
        inputNeeded[3] = "Phone Number";
        inputNeeded[4] = "Darkest Secret";
    }

};


#endif
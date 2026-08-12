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
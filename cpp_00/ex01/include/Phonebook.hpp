#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <string>

class PhoneBook {
    private:
        Contact contacts[8];
        int _total;

    public:
        PhoneBook();
        ~PhoneBook();

        void addContact(Contact const &c);
        void searchContact() const;
    
};

#endif
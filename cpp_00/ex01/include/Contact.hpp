#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
public:
        int name;
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

        Contact() {}

        Contact(int id, std::string firstName, std::string lastName, 
            std::string nickName, std::string phoneNumber, std::string darkestSecret)
        {
            name = id;
            FirstName = firstName;
            LastName = lastName;
            NickName = nickName;
            PhoneNumber = phoneNumber;
            DarkestSecret = darkestSecret;

        } 
}

#endif
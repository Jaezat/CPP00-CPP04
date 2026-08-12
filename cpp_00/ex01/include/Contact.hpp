#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
        std::string _index;
        std::string _FirstName;
        std::string _LastName;
        std::string _NickName;
        std::string _PhoneNumber;
        std::string _DarkestSecret;

public:
        void            setIndex(std::string index);
        std::string     getIndex(void) const;
        void            setFirstName(std::string value);
        std::string     getFirstName(void) const;
        void            setLastName(std::string value);
        std::string     getLastName(void) const;
        void            setNickName(std::string value);
        std::string     getNickName(void) const;
        void            setPhoneNumber(std::string value);
        std::string     getPhoneNumber(void) const;
        void            setDarkestSecret(std::string value);
        std::string     getDarkestSecret(void) const;
};

#endif
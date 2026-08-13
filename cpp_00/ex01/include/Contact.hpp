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
        // setters
        void            setIndex(std::string index);
        void            setFirstName(std::string value);
        void            setLastName(std::string value);
        void            setNickName(std::string value);
        void            setPhoneNumber(std::string value);
        void            setDarkestSecret(std::string value);

        // getters
        std::string     getIndex(void) const;
        std::string     getFirstName(void) const;
        std::string     getLastName(void) const;
        std::string     getNickName(void) const;
        std::string     getPhoneNumber(void) const;
        std::string     getDarkestSecret(void) const;
};

#endif
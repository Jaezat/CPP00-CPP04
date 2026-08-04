#include "Contact.hpp"

Contact::Contact()
    :_firstName(""), _lastName(""), _nickName(""),
     _phoneNumber(""), _darkestSecret("") {}

// Setter is void because it just saves a value inside an object
void Contact::setFirstName(std::string const &input)
{
    _firstName = input;
}
// Getter need to return a string to whoever called them 
std::string Contact::getFirstName() const
{
    return (_firstName);
}

void Contact::setLastName(std::string const &input)
{
    _lastName = input;

}

std::string Contact::getLastName() const
{
    return (_lastName);
}

void Contact::setNickName(std::string const &input)
{
    _nickName = input;

}

std::string Contact::getNickName() const
{
    return (_nickName);
}

void Contact::setPhoneNumber(std::string const &input)
{
    _phoneNumber = input;

}

std::string Contact::getPhoneNumber() const
{
    return (_phoneNumber);
}

void Contact::setDarkestSecret(std::string const &input)
{
    _darkestSecret = input;

}

std::string Contact::getDarkestSecret() const
{
    return (_darkestSecret);
}





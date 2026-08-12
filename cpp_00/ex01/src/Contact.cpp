#include "Contact.hpp"

void Contact::setIndex(std::string index) { this->_index = index; }
std::string Contact::getIndex(void) const { return (this->_index); }

void Contact::setFirstName(std::string value) { this->_FirstName = value; }
std::string Contact::getFirstName(void) const { return (this->_FirstName); }

void Contact::setLastName(std::string value) { this->_LastName = value; }
std::string Contact::getLastName(void) const { return (this->_LastName); }

void Contact::setNickName(std::string value) { this->_NickName = value; }
std::string Contact::getNickName(void) const { return (this->_NickName); }

void Contact::setPhoneNumber(std::string value) { this->_PhoneNumber = value; }
std::string Contact::getPhoneNumber(void) const { return (this->_PhoneNumber); }

void Contact::setDarkestSecret(std::string value) { this->_DarkestSecret = value; }
std::string Contact::getDarkestSecret(void) const { return (this->_DarkestSecret); }
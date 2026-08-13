#include "Contact.hpp"

// setters definition
void Contact::setIndex(std::string index) 
{ 
    this->_index = index; 
}

void Contact::setLastName(std::string value) 
{ 
    this->_LastName = value; 
}

void Contact::setFirstName(std::string value) 
{ 
    this->_FirstName = value; 
}

void Contact::setNickName(std::string value) 
{ 
    this->_NickName = value; 
}

void Contact::setPhoneNumber(std::string value) 
{ 
    this->_PhoneNumber = value; 
}

void Contact::setDarkestSecret(std::string value) 
{ 
    this->_DarkestSecret = value; 
}

// getters definition
std::string Contact::getIndex(void) const 
{ 
    return (this->_index); 
}

std::string Contact::getFirstName(void) const 
{ 
    return (this->_FirstName); 
}

std::string Contact::getLastName(void) const 
{ 
    return (this->_LastName); 
}

std::string Contact::getNickName(void) const 
{ 
    return (this->_NickName); 
}

std::string Contact::getPhoneNumber(void) const 
{ 
    return (this->_PhoneNumber); 
}

std::string Contact::getDarkestSecret(void) const 
{ 
    return (this->_DarkestSecret); 
}

#include "../include/Contact.hpp"
#include <sstream>

Contact::Contact() : index(0) {}

Contact::Contact(int id, const std::string& firstName, const std::string& lastName,
          const std::string& nickName, const std::string& phoneNumber, const std::string& darkestSecret)
    : index(id), FirstName(firstName), LastName(lastName),
      NickName(nickName), PhoneNumber(phoneNumber), DarkestSecret(darkestSecret)
{}
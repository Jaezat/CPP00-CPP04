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
                void            setIndex(std::string index); {this->_index = index; }
                std::string     getIndex(void) const; { return (this->_index); }
 
};

#endif
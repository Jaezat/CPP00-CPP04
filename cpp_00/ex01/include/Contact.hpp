#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
        Contact(); // this is the function we use to add values to the variables
        ~Contact(); // function that frees dynamically alloc mem + close open files 

		// setters so I can change/save the values
		void setFirstName(std::string const &input);
    	void setLastName(std::string const &input);
    	void setNickName(std::string const &input);
    	void setPhoneNumber(std::string const &input);
    	void setDarkestSecret(std::string const &input);

		// getters so I can read the values when needing SEARCH
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};


#endif
#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>

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

		// setters so I can save the values
		void setFirstName(std::string firstName);
    	void setLastName(std::string lastName);
    	void setNickName(std::string nickName);
    	void setPhoneNumber(std::string number);
    	void setDarkestSecret(std::string secret);

		// getters so I can read the values when needing SEARCH
		
}


#endif
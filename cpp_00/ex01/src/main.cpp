#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

# include <iostream>
# include <iomanip>

// We output value to ask for an input in a loop until we get EOF
std::string askInput(std::string const &value)
{
    str::string input;

    input = "";
    while (input.empty())
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
            return ("");
    }
    return (input);
}

bool createContact(Contact &c)
{
    std::string str;

    str = askInput("Enter first name: ");
    if (str.empty())
        return false;
    c.setFirstName(str);

    str = askInput("Enter last name: ");
    if (str.empty())
        return false;
    c.setLastName(str);

    str = askInput("Enter nickname: ");
    if (str.empty())
        return false;
    c.setNickName(str);

    str = askInput("Enter phone number: ");
    if (str.empty())
        return false;
    c.setPhoneNumber(str);

    str = askInput("Enter darkest secret: ");
    if (str.empty())
        return false;
    c.setDarkestSecret(str);

    return (true);
}

int main()
{
	PhoneBook phoneBook;
    std::string args;

    args = "";
    while(1)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, args))
            return (1);
        if (args == "ADD")
        {
            Contact newContact;
            if (createContact(newContact))
            {
                phoneBook.addContact(newContact);
                std::cout << "Contact saved succesfully!" << std::endl;
            }
        }
        else if (args == "SEARCH")
            phoneBook.searchContact();
        else if (args == "EXIT")
            break;
        else
            std::cout << "Message not valid\n.";
    }
    return (0);
}

/*
inicio del programa main:
    
    Crear una instancia del libro de contactos (PhoneBook phonebook)
    Crear una variable tipo texto para la entrada del usuario (std::string comando)

    BUCLE INFINITO:
        1. Mostrar un prompt al usuario (ej: "Enter command (ADD, SEARCH, EXIT): ")
        
        2. Leer la orden con std::cin o std::getline
           Si el usuario presiona CTRL+D (EOF):
               Salir del bucle

        3. SI comando == "ADD":
               phonebook.addContact()
               
        4. SINO SI comando == "SEARCH":
               phonebook.searchContact()
               
        5. SINO SI comando == "EXIT":
               Romper el bucle (break)
               
        6. SINO:
               Mostrar mensaje de "Comando no válido"

    terminar el programa devuelta 0
*/
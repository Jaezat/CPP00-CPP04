#include "../include/PhoneBook.hpp"
#include "../include/Contact.hpp"

# include <iostream>
# include <iomanip>

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
            phoneBook.addContact();
        else if (args == "SEARCH")
            phoneBook.searchContact();
        else if (args == "EXIT")
            break;
        else
            std::cout << "Message not valid\n";
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


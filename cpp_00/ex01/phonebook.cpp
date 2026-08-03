/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 14:51:27 by mariacos          #+#    #+#             */
/*   Updated: 2026/07/12 22:33:31 by mariacos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* program that:

Two classes:
1. Phonebook
- has an array of contacts
- store max 8 contacts
- If user tries to add a 9th contact:
	- replace the oldest one by the new one 
-- LAST IN FIRST OUT -- LIFO

2. Contact:
- Stands for a phonebook contact. 

How does it work?
- When program starts: the phonebook is empty and the user
is prompted to enter one of three commands:	
	- Add : save a new contact
		- If this command : prompted to input information
		of the new contact one field at a time.
		Once all the fields have been completed, then add 
		contact to the phonebook.
		- Contact fields are:
			- first name
			- Last name
			- Nickname
			- Phone nomber
			- Darkest secret
			- Saved contact can't have empty fields.
	- Search : display a specfic contact
		- Mostrar la lista de todos los contactos guardados, en formato de 4 columnas: index | first name | last name | nickname
		- Pedir al usuario un índice (un número) de la lista que acabas de mostrar.
		- Validar ese índice (¿existe esa posición? ¿está dentro del rango?).
		- Si es válido, mostrar los datos de ese contacto específico, un campo por línea.
		
	- Exit
		- el programa termina y sale de los contactos y los contactos son perdidos por siempre.

	- Otro tipo de input es ignorado. 
	- Una vez que el comando ha sido correctamente ejecutado, el programa
	espera por otro, solo para cuando el user pone como input EXIT. 
	
	-Dar un nombre relevante de tus ejecutables.
 */

/* Como voy a hacer esto?
1. Para comenzar tengo que crear las clases:
	-> Phonebook
	-> Contact
 */

#include <iostream>
#include <string>

class phoneBook
{
	/* 
	- has an array of contacts
	- store max 8 contacts
	- If user tries to add a 9th contact:
	- replace the oldest one by the new one */
	/* 
	attributes [private]:
		- array
	methods [public]: 
		- function that replaces the new contact as
		the old one.
	*/
	
}


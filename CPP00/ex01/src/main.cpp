/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:21 by namatias          #+#    #+#             */
/*   Updated: 2026/06/22 23:52:12 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	Contact 	contact;
	PhoneBook	phoneBook;

	if (argc == 1 && !argv[1])
	{
		// contact.setContact();
		phoneBook.newContact();
		phoneBook.newContact();
		// phoneBook.displayList();
		phoneBook.search();
	}
	return (0);
}
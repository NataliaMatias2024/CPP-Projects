/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:21 by namatias          #+#    #+#             */
/*   Updated: 2026/06/23 18:06:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;

	if (argc == 1 && !argv[1])
		phoneBook.displayMenu();
	return (0);
}
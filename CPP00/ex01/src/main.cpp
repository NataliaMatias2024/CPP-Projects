/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:21 by namatias          #+#    #+#             */
/*   Updated: 2026/06/24 19:38:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phoneBook;

	(void)argv;
	if (argc == 1)
		phoneBook.displayMenu();
	else
	{
		std::cout << "Error: This program does not accept arguments." << std::endl;
		std::cout << "Usage: ./contacts" << std::endl;
	}
	return (0);
}

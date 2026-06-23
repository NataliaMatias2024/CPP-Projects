/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:29:06 by namatias          #+#    #+#             */
/*   Updated: 2026/06/23 18:06:27 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	header();
static std::string truncate_10(const std:: string string);

PhoneBook::PhoneBook()
{
	_index = 0;
	_totalOfContacts = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::newContact()
{
	_listOfContacts[_index].setContact();
	_index = (_index + 1) % 8;
	if (_totalOfContacts < 8)
		_totalOfContacts++;
}

void	PhoneBook::displayList()//mostra na tela a lista de contatos (no max 8)
{
	size_t	i;

	i = 0;
	header();
	while (i < _totalOfContacts)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate_10(_listOfContacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate_10(_listOfContacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate_10(_listOfContacts[i].getNickName()) << "|" << std::endl;
		if (i != _totalOfContacts - 1)
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		i++;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

static void	header()
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

static std::string	truncate_10(const std:: string string)
{
	std::string	truncate;

	truncate = string;
	if (string.length() > 10)
		truncate = string.substr(0, 9) + '.';

	return (truncate);	
}

void	PhoneBook::search()//busca e mostra um contato
{
	size_t		valid_input;
	std::string	input;

	if (_totalOfContacts == 0)
	{
		std::cout << "The phonebook is empty!" << std::endl;
		return ;
	}

	displayList();
	std::cout << "Please enter the contact index to view details: " << std::endl;
	std::getline(std::cin, input);
	std::cout << std::endl;

	if (input.length() != 1 || input[0] < '0' || input[0] > '8')
	{
		std::cout << "Error: Please enter a valid index number. Returning to menu." << std::endl;
		return ;
	}
	
	valid_input = input[0] - '0';
	if (valid_input < 1 || valid_input > _totalOfContacts)
		std::cout << "Error: Contact not found. This index is currently empty or out of bounds." << std::endl;
	else
		_listOfContacts[valid_input - 1].displayContact();
}

void	PhoneBook::displayMenu() //mostra as opçoes para o usuário e chama as açoes
{
	std::string cmd;

	std::cout << "                PhoneBook" << std::endl;
	std::cout << "Please select one option ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD" || cmd == "add")
			newContact();
		else if (cmd == "SEARCH" || cmd == "search")
			search();
		else if (cmd == "EXIT" || cmd == "exit")
			return ; 
		else
			std::cout << "Error: " << cmd << ", is not a valid option!" << std::endl;
		std::cout << "Please select one option ADD, SEARCH or EXIT" << std::endl;
	}
}

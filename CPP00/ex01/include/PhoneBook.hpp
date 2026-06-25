/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:35 by namatias          #+#    #+#             */
/*   Updated: 2026/06/25 00:18:49 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream> //biblioteca base do C++. Lida com Input/Output (ex: std::cin e std::cout)
#include <string> //lida com string e suas manipulaçoes (ex: std::string, .length(), .substr())
#include <iomanip> //lida com personalizaçao do Input/Output (ex: setd::setw(10))
#include <cstdlib> //C Standard Library, stdlib do c++, traz funçoes variadas basicas (ex: exit())

class PhoneBook
{
	private:
		size_t		_index;
		size_t		_totalOfContacts;
		Contact		_listOfContacts[8];

	public:
		PhoneBook(); //construtor
		~PhoneBook(); //destrutor

		void	newContact(); //chama a funçao setContact, salva no index da lista
		void	displayList(); //mostra na tela a lista de contatos (no max 8) com o truncate
		void	displayMenu(); //mostra as opçoes para o usuário e chama as açoes
		void	search(); //busca e mostra um contato
};

#endif

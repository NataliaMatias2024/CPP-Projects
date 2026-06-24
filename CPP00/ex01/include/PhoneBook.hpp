/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:35 by namatias          #+#    #+#             */
/*   Updated: 2026/06/24 19:24:35 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

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

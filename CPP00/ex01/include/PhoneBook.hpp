/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:35 by namatias          #+#    #+#             */
/*   Updated: 2026/04/04 16:12:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "iostream"

class PhoneBook
{
	private:
		std::string _listOfContacts[8];
		int	_index;
		int _totalOfContacs;

	public:
		PhoneBook(); //construtor
		~PhoneBook(); //destrutor

		void	displayList(); //mostra na tela a lista de contatos (no max 8)

};

#endif

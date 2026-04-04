/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:39 by namatias          #+#    #+#             */
/*   Updated: 2026/04/04 16:06:41 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "iostream"

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _contactNumber;
	std::string _darkestSecret;

public:
	Contact(); //Construtor
	~Contact(); //Destrutot

	void	initContact(void); //inicia o contato
	void	setContactInfo(void); // seta os valores digitados pelo usuario
	void	displayContact(int index); //mostra na tela um contato especifico
};

#endif

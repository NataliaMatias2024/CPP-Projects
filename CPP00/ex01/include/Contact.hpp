/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:39 by namatias          #+#    #+#             */
/*   Updated: 2026/06/25 00:21:07 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
//Embora essa biblioteca exista dentro da iostream, ao usar as flags std=c++98
//PODE SER que o iostream n puxe as outras bibliotecas, por isso é necessario add as outras
//Ficando para o iostream apenas o controle de fluxo cout e cin
#include <string>
#include <cstdlib>

class Contact
{
	//Tudo que apenas a propria classe deve ter acesso é privado
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_secret;

	//Métodos da classe e sua inicializaçao e finalizaçao
	public:
		Contact(); //Construtor
		~Contact(); //Destrutor

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;

		void	setContact();
		void	displayContact() const;
};

#endif

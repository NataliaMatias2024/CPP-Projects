/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:27 by namatias          #+#    #+#             */
/*   Updated: 2026/06/20 23:17:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirstName() const
{
	return (_firstName);
}

std::string Contact::getLastName() const
{
	return (_lastName);
}

std::string Contact::getNickName() const
{
	return (_nickName);
}

std::string Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

std::string Contact::getSecret() const
{
	return (_secret);
}

void	Contact::setContact()
{
	std::cout << "Plese insert your contact informations:" << std::endl;

	std::cout << "First Name: ";
	std::getline(std::cin, _firstName);

	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);

	std::cout << "Nickname: ";
	std::getline(std::cin, _nickName);

	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _secret);

}

void	Contact::displayContact()
{
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickName << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _secret << std::endl;
}

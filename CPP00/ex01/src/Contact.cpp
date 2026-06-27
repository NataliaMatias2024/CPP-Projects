/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:31:27 by namatias          #+#    #+#             */
/*   Updated: 2026/06/27 20:33:59 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string	cleanSpaces(const std::string& str);
static std::string	getValidInput(const std::string& display);

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

void	Contact::setContact()
{
	std::cout << "Please insert your contact information: " << std::endl;
	_firstName = getValidInput("First Name: ");
	_lastName = getValidInput("Last Name: ");
	_nickName = getValidInput("Nickname: ");
	_phoneNumber = getValidInput("Phone Number: ");	
	_secret = getValidInput("Darkest Secret: ");
}

void	Contact::displayContact() const
{
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickName << std::endl;
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << _secret << std::endl;
}

static std::string	getValidInput(const std::string& display)
{
	std::string	input;
	std::string cleanedInput;

	while (true)
	{
		std::cout << display;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nEOF detected. Exiting PhoneBook." << std::endl;
			exit(0);
		}
		cleanedInput = cleanSpaces(input);
		if (cleanedInput.empty())
			std::cout << "Error: Field cannot be empty. Please try again." << std::endl;
		else
			return (cleanedInput);
	}
}

static std::string	cleanSpaces(const std::string& str)
{
	std::string	whitespace;
	std::string	cleanedInput;
	size_t		start;
	size_t		end;
	
	whitespace = " \t\n\r\v\f";
	start = str.find_first_not_of(whitespace);
	if (start == std::string::npos)
		return "";
	end = str.find_last_not_of(whitespace);
	cleanedInput = str.substr(start, end - start + 1);
	return (cleanedInput);
}

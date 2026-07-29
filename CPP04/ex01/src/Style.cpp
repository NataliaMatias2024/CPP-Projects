/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:51:40 by namatias          #+#    #+#             */
/*   Updated: 2026/07/27 21:28:07 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Style.hpp"

static std::string	truncate_20(const std::string& string);
static std::string	truncate_46(const std::string& string);

Style::Style()
{
}

Style::Style(const Style& obj)
{
	*this=obj;
}

Style& Style::operator=(const Style& obj)
{
	if (this != &obj)
		*this = obj;
	return (*this);
}

Style::~Style()
{
}

void Style::headerTest()
{
    std::cout << "+--------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "|                                  Initializing Tests                                  |" << std::endl;
    std::cout << "+--------------------------------------------------------------------------------------+" << std::endl;
}

void Style::headerTable()
{
    std::cout << "+--------------------+------------------+----------------------------------------------+" << std::endl;
    std::cout << "|" << std::setw(20) << " Type " << "|";
    std::cout << std::setw(18) << " Brain Address " << "|";
    std::cout << std::setw(46) << " Sound " << "|" << std::endl;
    std::cout << "+--------------------+------------------+----------------------------------------------+" << std::endl;
}

void Style::displayStatus(const Animal& obj1, const void* address)
{
    std::cout << "|" << std::setw(20) << truncate_20(obj1.getType()) << "|";
    std::cout << std::setw(18) << address << "|";
    std::cout << std::setw(46) << truncate_46(obj1.makeSoundTest()) << "|\n";
    std::cout << "+--------------------+------------------+----------------------------------------------+" << std::endl;
}

static std::string	truncate_20(const std::string& string)
{
	std::string	truncate;

	truncate = string;
	if (string.length() > 20)
		truncate = string.substr(0, 19) + '.';

	return (truncate);
}

static std::string	truncate_46(const std::string& string)
{
	std::string	truncate;

	truncate = string;
	if (string.length() > 46)
		truncate = string.substr(0, 45) + '.';

	return (truncate);
}

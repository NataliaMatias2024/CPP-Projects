/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:18:35 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 11:38:04 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Style.hpp"

static std::string	truncate_15(const std::string& string);

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
	std::cout << "+---------------------------------------------------------------+" << std::endl;
	std::cout << "|                       Initializing Tests                      |" << std::endl;
	std::cout << "+---------------------------------------------------------------+" << std::endl;
}

void Style::headerTable()
{
	std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
	std::cout << "|" << std::setw(15) << "     Name     " << "|";
	std::cout << std::setw(15) << "  Hit Points  " << "|";
	std::cout << std::setw(15) << " Energy Points" << "|";
	std::cout << std::setw(15) << "  Attack Dmg  " << "|" << std::endl;
	std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
}

void Style::displayStatus(const ClapTrap &obj1)
{
	std::cout << "|" << std::setw(15) << truncate_15(obj1.getName()) << "|";
	std::cout << std::setw(15) << obj1.getHitPoints() << "|";
	std::cout << std::setw(15) << obj1.getEnergyPoints() << "|";
	std::cout << std::setw(15) << obj1.getAttackDamage() << "|\n";
	std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
}

static std::string	truncate_15(const std::string& string)
{
	std::string	truncate;

	truncate = string;
	if (string.length() > 15)
		truncate = string.substr(0, 14) + '.';

	return (truncate);
}

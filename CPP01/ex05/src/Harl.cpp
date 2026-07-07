/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:30:36 by namatias          #+#    #+#             */
/*   Updated: 2026/07/07 18:38:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
};

Harl::~Harl()
{
};

void Harl::info(void)
{
	std::cout << "---[INFO]---" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::debug(void)
{
	std::cout << "---[DEBUG]---" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do!" << std::endl;
};

void Harl::error(void)
{
	std::cout << "---[ERROR]---" << std::endl;
	std::cout << "This is unacceptable!\n";
	std::cout << "I want to speak to the manager now." << std::endl;
};

void Harl::warning(void)
{
	std::cout << "---[WARNING]---" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
};

void Harl::complain(std::string level)
{
	std::string	menuLevels[4] = {"info", "debug", "warning", "error"};
	// void (Harl::*menuFunctions[4])(void) = {&Harl::info(), debug(), warning(), error()};
	int			i;

	i = 0;
	while(i < 4)
	{
		if (level == menuLevels[i])
			break;
		i++;
	}
	if (i == 0)
		info();
	else if (i == 1)
		debug();
	else if (i == 2)
		warning();
	else if (i == 3)
		error();
};

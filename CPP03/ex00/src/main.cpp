/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:10:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/19 15:40:33 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iomanip>

static std::string	truncate_15(const std::string& string)
{
	std::string	truncate;

	truncate = string;
	if (string.length() > 15)
		truncate = string.substr(0, 14) + '.';

	return (truncate);
}

int	main()
{
	{
		std::cout << "+---------------------------------------------------------------+" << std::endl;
		std::cout << "|                       Initializing Tests                      |" << std::endl;
		std::cout << "+---------------------------------------------------------------+" << std::endl;

		std::cout << "                    Default Object Life Cycle:                 \n" << std::endl;
		ClapTrap	clapTrap;
		ClapTrap	copy("Natalia");
		ClapTrap	test("Luis");
		test = copy;
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << "     Name     " << "|";
		std::cout << std::setw(15) << "  Hit Points  " << "|";
		std::cout << std::setw(15) << " Energy Points" << "|";
		std::cout << std::setw(15) << "  Attack Dmg  " << "|" << std::endl;
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << truncate_15(clapTrap.getName()) << "|";
		std::cout << std::setw(15) << clapTrap.getHitPoints() << "|";
		std::cout << std::setw(15) << clapTrap.getEnergyPoints() << "|";
		std::cout << std::setw(15) << clapTrap.getAttackDamage() << "|\n";
		std::cout << "|---------------+---------------+---------------+---------------|" << std::endl;
		std::cout << "|" << std::setw(15) << truncate_15(copy.getName()) << "|";
		std::cout << std::setw(15) << copy.getHitPoints() << "|";
		std::cout << std::setw(15) << copy.getEnergyPoints() << "|";
		std::cout << std::setw(15) << copy.getAttackDamage() << "|\n";
		std::cout << "|---------------+---------------+---------------+---------------|" << std::endl;
		std::cout << "|" << std::setw(15) << truncate_15(test.getName()) << "|";
		std::cout << std::setw(15) << test.getHitPoints() << "|";
		std::cout << std::setw(15) << test.getEnergyPoints() << "|";
		std::cout << std::setw(15) << test.getAttackDamage() << "|\n";
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
	}
	{
		std::cout << "\n                Life Cycle of a ClapTrap Object:               \n" << std::endl;
		ClapTrap	marvin("Marvin");

		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << "     Name     " << "|";
		std::cout << std::setw(15) << "  Hit Points  " << "|";
		std::cout << std::setw(15) << " Energy Points" << "|";
		std::cout << std::setw(15) << "  Attack Dmg  " << "|" << std::endl;
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << truncate_15(marvin.getName()) << "|";
		std::cout << std::setw(15) << marvin.getHitPoints() << "|";
		std::cout << std::setw(15) << marvin.getEnergyPoints() << "|";
		std::cout << std::setw(15) << marvin.getAttackDamage() << "|\n";
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;

		marvin.takeDamage(5);
		marvin.attack("idiot humans ego");
		marvin.attack("idiot humans");
		marvin.beRepaired(10);

		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << "     Name     " << "|";
		std::cout << std::setw(15) << "  Hit Points  " << "|";
		std::cout << std::setw(15) << " Energy Points" << "|";
		std::cout << std::setw(15) << "  Attack Dmg  " << "|" << std::endl;
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;
		std::cout << "|" << std::setw(15) << truncate_15(marvin.getName()) << "|";
		std::cout << std::setw(15) << marvin.getHitPoints() << "|";
		std::cout << std::setw(15) << marvin.getEnergyPoints() << "|";
		std::cout << std::setw(15) << marvin.getAttackDamage() << "|\n";
		std::cout << "+---------------+---------------+---------------+---------------+" << std::endl;

	}
	return (0);
}




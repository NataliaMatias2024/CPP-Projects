/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:10:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 11:24:06 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Style.hpp"
#include "ScavTrap.hpp"


int	main()
{
	Style display;

	display.headerTest();
	{
		std::cout << "\n                    Default Object Life Cycle:                 \n" << std::endl;

		ClapTrap	clapTrap;
		ClapTrap	copy("Natalia");

		ScavTrap	inherit;
		ScavTrap	scavTrap("Luis");

		display.headerTable();
		display.displayStatus(clapTrap);
		display.displayStatus(copy);
		display.displayStatus(inherit);
		display.displayStatus(scavTrap);
	}
	{
		std::cout << "\n                Life Cycle of a CLAPTRAP Object:               \n" << std::endl;
		ClapTrap	marvin("Marvin");

		display.headerTable();
		display.displayStatus(marvin);

		std::cout << std::endl;

		marvin.takeDamage(5);
		marvin.attack("idiot humans ego");
		marvin.attack("idiot humans");
		marvin.beRepaired(10);
		marvin.takeDamage(25);

		std::cout << std::endl;

		display.headerTable();
		display.displayStatus(marvin);
	}
	{
		std::cout << "\n                Life Cycle of a SCAVTRAP Object:               \n" << std::endl;
		ScavTrap	scavTrap("Wall-E");

		display.headerTable();
		display.displayStatus(scavTrap);

		std::cout << std::endl;

		scavTrap.takeDamage(90);
		scavTrap.attack("insane humans");
		scavTrap.beRepaired(80);
		scavTrap.guardGate();
		scavTrap.takeDamage(90);

		std::cout << std::endl;

		display.headerTable();
		display.displayStatus(scavTrap);
	}
	return (0);
}




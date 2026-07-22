/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:10:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 14:14:48 by namatias         ###   ########.fr       */
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

		std::cout << std::endl;

		display.headerTable();
		display.displayStatus(clapTrap);
		display.displayStatus(copy);
		display.displayStatus(inherit);
		display.displayStatus(scavTrap);

		std::cout << std::endl;
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

		std::cout << std::endl;
	}
	return (0);
}




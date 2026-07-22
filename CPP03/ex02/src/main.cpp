/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:10:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 13:31:11 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Style.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int	main()
{
	Style display;

	display.headerTest();
	{
		std::cout << "\n                    Default Object Life Cycle:                 \n" << std::endl;

		ClapTrap	clapTrap;
		ClapTrap	copy("Natalia");

		FragTrap	fragtrap;
		FragTrap	fragtest("Ph");

		display.headerTable();
		display.displayStatus(clapTrap);
		display.displayStatus(copy);
		display.displayStatus(fragtrap);
		display.displayStatus(fragtest);

		clapTrap = copy;
		fragtrap = fragtest;

		display.headerTable();
		display.displayStatus(clapTrap);
		display.displayStatus(copy);
		display.displayStatus(fragtrap);
		display.displayStatus(fragtest);
	}
	{
		std::cout << "\n                Life Cycle of a FRAGTRAP Object:               \n" << std::endl;

		FragTrap	fragtrap("Ph");

		display.headerTable();
		display.displayStatus(fragtrap);

		fragtrap.takeDamage(50);
		fragtrap.attack("humans");
		std::cout << "Humans finally decided to finish the pool party!!" << std::endl;
		fragtrap.highFivesGuys();

		display.headerTable();
		display.displayStatus(fragtrap);
	}
	return (0);
}




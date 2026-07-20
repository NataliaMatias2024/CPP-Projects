/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:10:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/20 18:09:00 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Style.hpp"


int	main()
{
	Style display;

	display.headerTest();
	{
		std::cout << "\n                    Default Object Life Cycle:                 \n" << std::endl;

		ClapTrap	clapTrap;
		ClapTrap	copy("Natalia");
		ClapTrap	test("Luis");
		test = copy;

		display.headerTable();
		display.displayStatus(clapTrap);
		display.displayStatus(copy);
		display.displayStatus(test);
	}
	{
		std::cout << "\n                Life Cycle of a ClapTrap Object:               \n" << std::endl;
		ClapTrap	marvin("Marvin");

		display.headerTable();
		display.displayStatus(marvin);

		std::cout << std::endl;

		marvin.takeDamage(5);
		marvin.attack("idiot humans ego");
		marvin.attack("idiot humans");
		marvin.beRepaired(10);

		std::cout << std::endl;

		display.headerTable();
		display.displayStatus(marvin);
	}
	return (0);
}




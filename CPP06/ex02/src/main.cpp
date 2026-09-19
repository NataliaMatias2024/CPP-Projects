/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:10:23 by namatias          #+#    #+#             */
/*   Updated: 2026/09/19 14:01:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Style.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
	Style style;

	/*
	** Gera um numero aleatorio baseado na hora local do computador
	** garantindo uma randomizacao dos objetos criados
	*/
	std::srand(std::time(0));

	Base *obj = generate();
	Base *obj_1 = generate();

	style.headerTest("Printing type by pointer:");
	std::cout << std::endl;

	std::cout << "Class type: ";
	identify(obj);
	std::cout << "\nClass type: ";
	identify(obj_1);
	std::cout << std::endl;

	style.headerTest("Printing type by reference:");
	std::cout << std::endl;


	std::cout << "Class type: ";
	identify(*obj);
	std::cout << "\nClass type: ";
	identify(*obj_1);
	std::cout << std::endl;

	delete obj;
	delete obj_1;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:50:09 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:35:06 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Style.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main()
{
	Style	style;
	style.headerTest();
	{
		/*
		** WrongAnimal and WrongCat was implemented as explicitly required by the subject.
		**
		** Key notes for the evaluation process:
		** When a `WrongCat` object is created and assigned to a `WrongAnimal` pointer:
		**	- makeSound() outputs the base class sound rather than the derived one.
		**	- Deleting this pointer only triggers the `WrongAnimal` destructor.
		**	  The `WrongCat` destructor is deliberately bypassed by the compiler.
		**	- Undefined Behavior (UB): Although Valgrind does not report memory leaks
		**	  in this specific scenario, deleting a derived class through a base class pointer
		**	  without a virtual destructor constitutes Undefined Behavior in C++.
		**
		** This implementation serves as a counter-proof to the standard `Animal`, `Dog`, and `Cat` classes
		** highlighting exactly why virtual destructors and virtual methods are mandatory for safe and correct polymorphism.
		*/
		std::cout << "\n                             Wrong Tests\n" << std::endl;

		std::cout << "Initialize the Base Class:" << std::endl;
		const WrongAnimal* wrongAnimal = new WrongAnimal();
		std::cout << "\nInitialize 2 objs from a derivated class:" << std::endl;
		const WrongCat* wrongCat = new WrongCat();
		const WrongAnimal* wrongTest = new WrongCat();
		std::cout << std::endl;

		// wrongAnimal->makeSound();
		// wrongCat->makeSound();
		// wrongTest->makeSound();
		// std::cout << std::endl;

		style.headerTable();
		std::cout << "|" << std::setw(20) << wrongAnimal->getType() << "|";
		std::cout << std::setw(46) << wrongAnimal->makeSoundTest() << "|\n";
		std::cout << "+-------------------------------------------------------------------+" << std::endl;
		std::cout << "|" << std::setw(20) << wrongCat->getType() << "|";
		std::cout << std::setw(46) << wrongCat->makeSoundTest() << "|\n";
		std::cout << "+-------------------------------------------------------------------+" << std::endl;
		std::cout << "|" << std::setw(20) << wrongTest->getType() << "|";
		std::cout << std::setw(46) << wrongTest->makeSoundTest() << "|\n";
		std::cout << "+-------------------------------------------------------------------+" << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		delete wrongAnimal;
		delete wrongCat;
		delete wrongTest;
		std::cout << std::endl;
	}
	{
		std::cout << "\n                            Correct Tests\n" << std::endl;

		std::cout << "Initialize the Base Class:" << std::endl;
		const Animal* meta = new Animal();

		std::cout << "\nInitialize 2 derivated classes:" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus(*meta);
		style.displayStatus(*j);
		style.displayStatus(*i);
		std::cout << std::endl;

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		j->makeSound();
		i->makeSound();
		std::cout << std::endl;

		delete meta;
		delete i;
		delete j;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:50:09 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 23:27:21 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Style.hpp"
#include "Animal.hpp"

int	main()
{
	Style	style;
	style.headerTest();
	{
		std::cout << "\n                    Default Object Life Cycle                  \n" << std::endl;

		std::cout << "Initialize the Base Class: ";
		const Animal* meta = new Animal();

		std::cout << "\nInitialize sub class Dog: ";
		const Animal* j = new Dog();

		std::cout << "\nInitialize sub class Cat: ";
		const Animal* i = new Cat();
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus(*meta, meta);
		style.displayStatus(*j, j);
		style.displayStatus(*i, i);
		std::cout << std::endl;

		std::cout << "\nInitialize the memory cleaning" << std::endl;
		delete meta;
		delete i;
		delete j;
	}
	{
		/*
        ** The Rule of Three
        ** Every time your class manages a dynamically allocated resource (using new and delete),
        ** you MUST implement a Deep Copy. Otherwise, you will face memory leaks or double free errors.
        **
        ** Deep copies must be explicitly coded by you. If you don't instruct the program 
        ** the default copy constructor will perform a Shallow Copy. 
		** So you must specify inside your copy constructor (and assignment operator) 
		** that a new memory allocation has to be made!
        */
		std::cout << "\n                       Showing Deep Copy                   \n" << std::endl;

		std::cout << "Initialize Objs Cat: \n";
		const Cat* adultCat = new Cat();
		const Cat* kitten = new Cat();
		std::cout << std::endl;

		std::cout << "Initialize Objs Dog: \n";
		const Dog* adultDog = new Dog();
		const Dog* puppy = new Dog();
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus(*adultCat, adultCat);
		style.displayStatus(*kitten, kitten);
		style.displayStatus(*adultDog, adultDog);
		style.displayStatus(*puppy, puppy);
		std::cout << std::endl;

		std::cout << "Calling Copy Constructors to test: " << std::endl;

		std::cout << "\nInitialize the memory cleaning" << std::endl;
		delete adultCat;
		delete kitten;
		delete adultDog;
		delete puppy;
	}
	return (0);
}

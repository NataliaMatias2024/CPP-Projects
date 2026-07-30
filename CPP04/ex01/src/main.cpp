/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:50:09 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 13:50:56 by namatias         ###   ########.fr       */
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
		std::cout << "\n                    Array of Animals Test (ex01)                  \n" << std::endl;

		const int arraySize = 4;
		const Animal* zoo[arraySize];

		std::cout << "Filling the array with Cats and Dogs...\n" << std::endl;
		for (int i = 0; i < arraySize; i++)
		{
			if (i < arraySize / 2)
			{
				std::cout << "Array Zoo, index: " << i << ". Filling with Dog Obj:\n" << std::endl;
				zoo[i] = new Dog();
				std::cout << std::endl;
			}
			else
			{
				std::cout << "Array Zoo, index: " << i << ". Filling with Cat Obj:\n" << std::endl;
				zoo[i] = new Cat();
				std::cout << std::endl;
			}
		}

		style.headerTable();
		for (int i = 0; i < arraySize; i++)
		{
			style.displayStatus(*zoo[i], zoo[i]->getBrainAddress());
		}
		std::cout << std::endl;

		std::cout << "Testing sounds:\n" << std::endl;
		for (int i = 0; i < arraySize; i++)
		{
			std::cout << zoo[i]->getType() << " says: ";
			zoo[i]->makeSound();
		}
		std::cout << std::endl;

		std::cout << "Initialize the memory cleaning (Array demolition)\n" << std::endl;
		for (int i = 0; i < arraySize; i++)
		{
			delete zoo[i];
			std::cout << std::endl;
		}
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

		std::cout << "Initialize Obj adultDog: \n" << std::endl;
		Dog* adultDog = new Dog();
		adultDog->setIdea(0, "I need to protect the house!");
		adultDog->setIdea(1, "Where is my bone?");
		std::cout << std::endl;

		std::cout << "Initialize Obj puppy (Cloning adultDog using Copy Constructor): \n" << std::endl;
		Dog* puppy = new Dog(*adultDog);
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus(*adultDog, adultDog->getBrainAddress());
		style.displayStatus(*puppy, puppy->getBrainAddress());
		std::cout << std::endl;

		std::cout << "Idea 0 from adultDog : " << adultDog->getIdea(0) << std::endl;
		std::cout << "Idea 0 from puppy    : " << puppy->getIdea(0) << std::endl;
		std::cout << std::endl;

		std::cout << "--- Changing the idea ONLY in the puppy's brain ---\n" << std::endl;
		puppy->setIdea(0, "I want to play and sleep all day!");

		std::cout << "Idea 0 from adultDog : " << adultDog->getIdea(0) << " <-- Kept his own idea!" << std::endl;
		std::cout << "Idea 0 from puppy    : " << puppy->getIdea(0) << " <-- New idea in a new brain!" << std::endl;
		std::cout << std::endl;

		std::cout << "Initialize the memory cleaning\n" << std::endl;
		delete adultDog;
		std::cout << std::endl;
		delete puppy;
	}
	return (0);
}

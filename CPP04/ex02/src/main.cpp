/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:50:09 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 15:21:40 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Style.hpp"
#include "AAnimal.hpp"

int	main()
{
	Style	style;
	style.headerTest();
	{
		/*
		** std::cout << "\n                    Instantiate AAnimel Test                  \n" << std::endl;
		** ABSTRACT CLASS PROOF:
		** Since AAnimal has a pure virtual function (makeSound = 0), it is abstract.
		** The compiler will block any attempt to instantiate the base class directly.
		**
		*/

		/*
		** AAnimal test;
		** const AAnimal* meta = new AAnimal();
		*/
	}
	{
		std::cout << "\n                       Showing Deep Copy                   \n" << std::endl;

		std::cout << "Initialize Obj adultDog: \n" << std::endl;
		Dog* adultDog = new Dog();
		adultDog->setIdea(0, "I need to protect the house!");
		adultDog->setIdea(1, "Where is my human?");
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
	{
		std::cout << "\n          Showing Deep Copy via Assignment Operator (Cats)        \n" << std::endl;

		std::cout << "Initialize Obj adultCat and kitten separately: \n" << std::endl;
		Cat* adultCat = new Cat();
		adultCat->setIdea(0, "I own this house.");

		Cat* kitten = new Cat();
		std::cout << std::endl;

		std::cout << "Assigning adultCat to kitten using operator= (*kitten = *adultCat): \n" << std::endl;
		*kitten = *adultCat;
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus(*adultCat, adultCat->getBrainAddress());
		style.displayStatus(*kitten, kitten->getBrainAddress());
		std::cout << std::endl;

		std::cout << "Idea 0 from adultCat : " << adultCat->getIdea(0) << std::endl;
		std::cout << "Idea 0 from kitten   : " << kitten->getIdea(0) << std::endl;
		std::cout << std::endl;

		std::cout << "--- Changing the idea ONLY in the kitten's brain ---\n" << std::endl;
		kitten->setIdea(0, "I want to chase the laser light!");

		std::cout << "Idea 0 from adultCat : " << adultCat->getIdea(0) << " <-- Kept her own idea!" << std::endl;
		std::cout << "Idea 0 from kitten   : " << kitten->getIdea(0) << " <-- New idea in a new brain!" << std::endl;
		std::cout << std::endl;

		std::cout << "Initialize the memory cleaning\n" << std::endl;
		delete adultCat;
		std::cout << std::endl;
		delete kitten;
		std::cout << std::endl;
	}
	return (0);
}

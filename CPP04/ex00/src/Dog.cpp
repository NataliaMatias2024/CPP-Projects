/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:39:15 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 22:57:04 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor Called" << std::endl;
}

/*Copy Constructor*/
Dog::Dog(const Dog& obj): Animal(obj)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

void 	Dog::makeSound() const
{
	std::cout << "woof wooooooof" << std::endl;
}

std::string	Dog::makeSoundTest() const
{
	std::string sound = "woof wooooooof";
	return (sound);
}

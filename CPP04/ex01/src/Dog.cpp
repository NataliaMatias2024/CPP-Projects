/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:39:15 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 23:26:21 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog"), _idea(new Brain("I am a dog!"))
{
	std::cout << "Dog Constructor Called" << std::endl;
}

/*Copy Constructor*/
Dog::Dog(const Dog& obj): Animal(obj), _idea(new Brain(*(obj._idea)))
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete this->_idea;
		this->_idea = new Brain (*(obj._idea));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->_idea;
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

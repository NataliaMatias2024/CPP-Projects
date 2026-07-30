/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:39:15 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 14:36:13 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog"), _idea(new Brain("I am a dog!"))
{
	std::cout << "Dog Constructor Called" << std::endl;
}

/*Copy Constructor*/
Dog::Dog(const Dog& obj): AAnimal(obj), _idea(new Brain(*(obj._idea)))
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		AAnimal::operator=(obj);
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
	std::cout << "woof woof" << std::endl;
}

std::string Dog::getThought() const
{
    return (this->getIdea(0));
}

void Dog::setIdea(int index, std::string idea)
{
    this->_idea->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    return (this->_idea->getIdea(index));
}

const void* Dog::getBrainAddress() const
{
    return (this->_idea);
}

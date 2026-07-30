/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:00:41 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 13:49:00 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), _idea(new Brain("I am a cat!"))
{
	std::cout << "Cat Constructor Called" << std::endl;
}

/*Copy Constructor*/
Cat::Cat(const Cat& obj): Animal(obj), _idea(new Brain(*(obj._idea)))
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		delete this->_idea;
		this->_idea = new Brain(*(obj._idea));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->_idea;
}

void	Cat::makeSound() const
{
	std::cout << "meow meow!" << std::endl;
}

std::string Cat::getThought() const
{
    return (this->getIdea(0));
}

void Cat::setIdea(int index, std::string idea)
{
    this->_idea->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
    return (this->_idea->getIdea(index));
}

const void* Cat::getBrainAddress() const
{
    return (this->_idea);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 17:39:15 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:32:46 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog Constructor Called" << std::endl;
	this->_type = "Dog";
}

/*Copy Constructor*/
Dog::Dog(const Dog& obj): Animal()
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = obj;
}

/*Assignment Operator*/
Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:40:17 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 14:33:30 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal Constructor Called" << std::endl;
}

/*Copy Constructor*/
AAnimal::AAnimal(const AAnimal& obj): _type(obj._type)
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	std::cout << "AAnimal Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "Animals can make many different sounds!" << std::endl;
}

std::string AAnimal::getThought() const
{
    return ("No brain, just pure instincts...");
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

AAnimal::AAnimal(const std::string& type): _type(type)
{
	std::cout << "AAnimal Parametrized Constructor Called" << std::endl;
}

const void* AAnimal::getBrainAddress() const
{
    return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:48:27 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:30:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = obj;
}

/*Assignment Operator*/
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
		std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animals can make wrong sounds! " << std::endl;
}

std::string	WrongAnimal::makeSoundTest() const
{
	std::string sound = "Wrong Animals can make wrong sounds! ";
	return (sound);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

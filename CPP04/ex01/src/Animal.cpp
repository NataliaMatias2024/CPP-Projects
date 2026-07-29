/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:40:17 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 23:23:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

/*Copy Constructor*/
Animal::Animal(const Animal& obj): _type(obj._type)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

/*Assignment Operator*/
Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animals can make many different sounds!" << std::endl;
}

std::string	Animal::makeSoundTest() const
{
	std::string sound = "Animals can make many different sounds!";
	return (sound);
}

std::string Animal::getType() const
{
	return (this->_type);
}

Animal::Animal(const std::string& type): _type(type)
{
	std::cout << "Animal Parametrized Constructor Called" << std::endl;
}

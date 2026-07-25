/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:40:17 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:29:11 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Constructor Called" << std::endl;
}

/*Copy Constructor*/
Animal::Animal(const Animal& obj)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = obj;
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
	return (_type);
}

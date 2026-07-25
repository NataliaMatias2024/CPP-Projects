/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:00:41 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:32:48 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->_type = "Cat";
}

/*Copy Constructor*/
Cat::Cat(const Cat& obj): Animal()
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = obj;
}

/*Assignment Operator*/
Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meoowww meooooowwwwwww!" << std::endl;
}

std::string	Cat::makeSoundTest() const
{
	std::string sound = "meoowww meooooowwwwwww!";
	return (sound);
}

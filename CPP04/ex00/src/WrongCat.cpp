/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:59:15 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:14:49 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal()
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong meeeeooowwww meeeeooowwww !! " << std::endl;
}

std::string	WrongCat::makeSoundTest() const
{
	std::string sound = "Wrong meeeeooowwww meeeeooowwww !! ";
	return (sound);
}

std::string WrongCat::getType() const
{
	return (_type);
}

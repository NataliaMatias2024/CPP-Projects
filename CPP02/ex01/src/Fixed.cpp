/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:39:49 by namatias          #+#    #+#             */
/*   Updated: 2026/07/13 15:09:31 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
** Static Member Initialization
** Must be initialized using the scope resolution operator (::)
** The static keyword is strictly omitted in the implementation file
*/
const int Fixed::_fractBits = 8;

Fixed::Fixed(): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*
** Copy Constructor
** Initializes a newly created object as a copy of an existing object
*/
Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

/*
** Copy Assignment Operator
** 	Overwrites the contents of an already existing object
*/
Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_rawBits = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return (_rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

Fixed::Fixed(const int number_int)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number_float)
{
	std::cout << "Float constructor called" << std::endl;
}
/*
** to convert fixed points values to a float
** (float)fixed_point_number / (1 << 8) or (float)(fixed_point_number / 256)
*/
float Fixed::toFloat (void) const
{
	float	newFloat;

	newFloat = (float)this->getRawBits() / (1 << _fractBits);
	return (newFloat);
}


int Fixed::toInt (void) const
{
	int	newInt;

	newInt = ;
	return (newInt);
}

std::ostream& operator<<(std::ostream& output, const Fixed& object)
{
	output << object.toFloat();
	return (output);
}


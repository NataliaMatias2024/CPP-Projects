/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:17:47 by namatias          #+#    #+#             */
/*   Updated: 2026/07/10 16:44:08 by namatias         ###   ########.fr       */
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
** 	Initializes a newly created object as a copy of an existing object
** 	BEST practices:
**		Direct member assignment (this->_rawBits = obj._rawBits), most performant approach
**
**	To strictly match the 42 subject's expected terminal output
**  we delegate the assignment process to the Copy Assignment Operator
**				*this = obj;
*/
Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

/*
** Copy Assignment Operator
** 	Overwrites the contents of an already existing object with the contents of another
**  Always implements a self-assignment guard (this != &obj) to prevent destructive overlapping.
**  Must return a reference to the current object (*this)
**
**	Again the most commum pratice is
**		this->_rawBits = obj._rawBits;
**	But to match the 42 subject's output we delegate the assignment process to the getters
**		this->_rawBits = obj.getRawBits();
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

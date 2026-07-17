/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 15:10:27 by namatias          #+#    #+#             */
/*   Updated: 2026/07/17 17:06:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractBits = 8;

Fixed::Fixed(): _rawBits(0)
{
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		this->_rawBits = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

Fixed::Fixed(const int number_int)
{
	_rawBits = number_int << _fractBits;
}

Fixed::Fixed(const float number_float)
{
	_rawBits = (int)(roundf(number_float * (1 << _fractBits)));
}

int	Fixed::toInt(void) const
{
	int	tempInt;

	tempInt = _rawBits >> _fractBits;
	return (tempInt);
}

float	Fixed::toFloat(void) const
{
	float	tempFloat;

	tempFloat = (float)_rawBits / (1 << _fractBits);
	return (tempFloat);
}

bool	Fixed::operator>(const Fixed& numb2) const
{
	return (this->_rawBits > numb2._rawBits);
}

bool	Fixed::operator<(const Fixed& numb2) const
{
	return (this->_rawBits < numb2._rawBits);
}

bool	Fixed::operator>=(const Fixed& numb2) const
{
	return (this->_rawBits >= numb2._rawBits);
}

bool	Fixed::operator<=(const Fixed& numb2) const
{
	return (this->_rawBits <= numb2._rawBits);
}

bool	Fixed::operator==(const Fixed& numb2) const
{
	return (this->_rawBits == numb2._rawBits);
}

bool	Fixed::operator!=(const Fixed& numb2) const
{
	return (this->_rawBits != numb2._rawBits);
}

Fixed	Fixed::operator+(const Fixed& numb2) const
{
	Fixed	temp;

	temp = this->toFloat() + numb2.toFloat();
	return (temp);
}

Fixed	Fixed::operator-(const Fixed& numb2) const
{
	Fixed	temp;

	temp = this->toFloat() - numb2.toFloat();
	return (temp);
}

Fixed	Fixed::operator*(const Fixed& numb2) const
{
	Fixed	temp;

	temp = this->toFloat() * numb2.toFloat();
	return (temp);
}

Fixed	Fixed::operator/(const Fixed& numb2) const
{
	Fixed	temp;

	temp = this->toFloat() / numb2.toFloat();
	return (temp);
}

/*
**	Prefix (++a)
*/
Fixed& Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed& Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

/*
**	Postfix (a++)
*/
Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->_rawBits--;
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->_rawBits++;
	return (temp);
}

Fixed&	Fixed::min(Fixed& numb1, Fixed& numb2)
{
	if (numb1 < numb2)
		return (numb1);
	return (numb2);
}

const Fixed& 	Fixed::min(const Fixed& numb1, const Fixed& numb2)
{
	if (numb1 < numb2)
		return (numb1);
	return (numb2);
}

Fixed&	Fixed::max(Fixed& numb1, Fixed& numb2)
{
	if (numb1 > numb2)
		return (numb1);
	return (numb2);
}

const Fixed& 	Fixed::max(const Fixed& numb1, const Fixed& numb2)
{
	if (numb1 > numb2)
		return (numb1);
	return (numb2);
}

std::ostream& operator<<(std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();
	return (output);
}

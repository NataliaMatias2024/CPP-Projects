/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 15:01:05 by namatias          #+#    #+#             */
/*   Updated: 2026/07/10 15:28:42 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_rawBits;

		/*
		** Combining static + const creates a class-level constant
		** In C++98 integral types (like int) with both qualifiers can be
		** initialized directly in the header file (static const int _fractBits = 8;)
		** However, to maintain consistency this value will be in the Fixed.cpp file
		*/
		static const int	_fractBits;

	public:
		Fixed();

		/*
		** Copy Constructor
		** The parameter must be a constant reference to the class type
		** DECLARATION: The parameter name is optional in the header
		**   -> Valid examples: const Fixed& or const Fixed& obj
		** IMPLEMENTATION: A parameter name (e.g., 'obj') is strictly required
		** so its data can be accessed during the copy process
		*/
		Fixed(const Fixed&);

		/*
		** Copy Assignment Operator
		** Overloads the = operator for the class
		** Unlike the Copy Constructor (creates a new object), this assigns values
		** from one existing object to another
		** Must return a reference to the current object (*this)
		*/
		Fixed& operator=(const Fixed&);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif

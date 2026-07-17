/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:50:50 by namatias          #+#    #+#             */
/*   Updated: 2026/07/17 17:01:37 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_rawBits;
		static const int	_fractBits;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int number_int);
		Fixed(const float number_float);

		int		toInt (void) const;
		float	toFloat (void) const;

/*
**	Comparison Operators
**
**  Returns a boolean value (true or false) after comparing two objects.
**  One object is explicitly passed as an argument, while the other is
**  implicitly the object that invoked the operator (accessed via 'this').
*/
		bool	operator>(const Fixed&) const;
		bool	operator<(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;

/*
**	Arithmetc Operators
**
**  Returns a new Fixed object (by value) containing the result of the
**  arithmetic operation. The original objects remain unchanged.
*/
		Fixed	operator+(const Fixed&) const;
		Fixed	operator-(const Fixed&) const;
		Fixed	operator*(const Fixed&) const;
		Fixed	operator/(const Fixed&) const;

/*
**  Increment and Decrement operators
**
**	They have two variants:
**      - Prefix (++a): Increments the value first, then returns the updated
**                      object itself. Returns a reference (Fixed&).
**      - Postfix (a++): Creates a temporary copy with the old value, increments
**                       the original object, and returns the temporary copy.
**                       Returns a new object by value (Fixed).
**                       (The 'int' parameter is a dummy used by the compiler).
*/
		Fixed& operator--();
		Fixed& operator++();
		Fixed operator--(int);
		Fixed operator++(int);


		static Fixed& min(Fixed&, Fixed&);
		static const Fixed& min(const Fixed&, const Fixed&);
		static Fixed& max(Fixed&, Fixed&);
		static const Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream& output, const Fixed&);

#endif

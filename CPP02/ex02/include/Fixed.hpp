/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 19:50:50 by namatias          #+#    #+#             */
/*   Updated: 2026/07/15 20:12:12 by namatias         ###   ########.fr       */
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
		Fixed(const int number_int);
		Fixed(const float number_float);
		Fixed& operator=(const Fixed&);
		~Fixed();

		int		toInt (void) const;
		int		getRawBits(void) const;
		float	toFloat (void) const;
		void	setRawBits(int const raw);

		static Fixed& min(Fixed& , Fixed&);
};

std::ostream& operator<<(std::ostream& output, const Fixed&);

#endif

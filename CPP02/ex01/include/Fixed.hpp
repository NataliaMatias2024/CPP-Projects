/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:59:23 by namatias          #+#    #+#             */
/*   Updated: 2026/07/13 13:34:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		const int			_rawBits;
		static const int	_fractBits;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();

		Fixed(const int number_int);
		Fixed(const float number_float);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat (void) const;
		int		toInt (void) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed&);

#endif

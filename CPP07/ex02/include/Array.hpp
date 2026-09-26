/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:52:26 by namatias          #+#    #+#             */
/*   Updated: 2026/09/26 00:08:21 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(const Array&);
		Array& operator=(const Array&);
		~Array();

		Array(unsigned int);

		T& operator[](const unsigned int);
		const T& operator[](const unsigned int) const;

		unsigned int size() const;
};

template <typename T>
std::ostream&	operator<<(std::ostream&, const Array<T>&);

#include "Array.tpp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 13:54:12 by namatias          #+#    #+#             */
/*   Updated: 2026/09/18 15:36:01 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>
#include <stdint.h>

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer&);
		Serializer& operator=(const Serializer&);
		~Serializer();

	public:
		/*
		** It takes a pointer
		** and converts it to the unsigned integer type uintptr_t
		*/
		static uintptr_t serialize(Data* ptr);

		/*
		** It takes an unsigned
		** integer parameter and converts it to a pointer to Data.
		*/
		static Data* deserialize(uintptr_t raw);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:22:07 by namatias          #+#    #+#             */
/*   Updated: 2026/09/18 16:30:59 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& obj)
{
	*this = obj;
}

Serializer& Serializer::operator=(const Serializer& obj)
{
	(void)obj;
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	aux;

	aux = reinterpret_cast<uintptr_t>(ptr);
	std::cout << "Serialize Done!" << std::endl;
	return (aux);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* aux;

	aux = reinterpret_cast<Data*>(raw);
	std::cout << "Deserialize Done!" << std::endl;
	return (aux);
}

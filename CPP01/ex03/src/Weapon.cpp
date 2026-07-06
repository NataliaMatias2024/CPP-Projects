/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:04:04 by namatias          #+#    #+#             */
/*   Updated: 2026/07/06 15:19:49 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType() const
{
	return (_type);
}

/*
**These three statements are quivalent
**this->_type = type;
**_type = type;
**(*this)._type = type;
*/
void	Weapon::setType(const std::string type)
{
	_type = type;
}

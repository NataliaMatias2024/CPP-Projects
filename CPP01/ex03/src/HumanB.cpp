/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:31:17 by namatias          #+#    #+#             */
/*   Updated: 2026/07/08 18:58:55 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const
{
	if (this->_weapon == NULL)
		std::cout << _name << " attacks with bare hands " << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}


void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

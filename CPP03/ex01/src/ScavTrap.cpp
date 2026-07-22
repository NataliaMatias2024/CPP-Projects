/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 18:12:36 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 11:23:33 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** When a derived class is instantiated, the base class constructor is called first.
** Then, the derived class inherits the attributes and can override their values.
*/
ScavTrap::ScavTrap(): ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Parametrized Constructor for " << this->_name << " Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!! Be aware" << std::endl;
}

/*
** Since this is the only function overridden from the ClapTrap base class,
** it will be the only action that actually prints "ScavTrap"!!
*/
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " can't attack " << target << "! He's exhausted and doesn't have energy points!" << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " can't attack " << target << "! His battery got too low and now he turned off\nRIP =/" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", ";
		std::cout << "causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

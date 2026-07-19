/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 13:25:20 by namatias          #+#    #+#             */
/*   Updated: 2026/07/19 15:57:53 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

/*Copy Constructor*/
ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

/*Assignment Operator*/
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

/*Constructor with name arg*/
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametrized Constructor for " << this->_name << " Called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " took " << amount << " of damage caused by a water jet!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " wraps herself in the towel and recovery " << amount << " of hit points. Your current health is " << this->_hitPoints << " hit points." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap: " << this->_name << " attacks " << target << ", ";
	std::cout << "causing " << this->_attackDamage << " points of damage!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (_name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 13:25:20 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 11:24:15 by namatias         ###   ########.fr       */
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
	std::cout << "ClapTrap " << this->_name << " took " << amount << " of damage caused by a water jet!" << std::endl;
	if (amount >= this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "Ooooh noooo!\n";
		std::cout << "ClapTrap " << this->_name << " took critical damage and turned off !!\nRIP =/" << std::endl;
	}
	else
		this->_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired now! Hi's exausted and don't have energy points!" << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired now! His battery got too low and now he turned off\nRIP =/" << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " wraps himself in the towel and recovers " << amount << " of hit points. His current health is " << this->_hitPoints << " hit points." << std::endl;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << "! He's exhausted and doesn't have energy points!" << std::endl;
	else if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << "! His battery got too low and now he turned off\nRIP =/" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", ";
		std::cout << "causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:05:51 by namatias          #+#    #+#             */
/*   Updated: 2026/07/29 15:22:44 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain Assignment Operator Called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain Parametrized Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = idea;
}

void	Brain::setIdea(int index, std::string idea)
{
	int sizeIdeas = sizeof(this->_ideas) / sizeof(this->_ideas[0]);

	if (index < 0 || index >= sizeIdeas)
		std::cerr << "Index out of range. My Brain have space from 0 to " << (sizeIdeas - 1) << std::endl;
	else
		this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	int sizeIdeas = sizeof(this->_ideas) / sizeof(this->_ideas[0]);

	if (index < 0 || index >= sizeIdeas)
		return ("Error: Index out of range!");
	else
		return (this->_ideas[index]);
}

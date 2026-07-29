/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:05:51 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 23:29:20 by namatias         ###   ########.fr       */
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
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << "Brain Assignment Operator Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain Parametrized Constructor Called" << std::endl;
}
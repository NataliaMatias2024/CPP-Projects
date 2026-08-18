/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:50:03 by namatias          #+#    #+#             */
/*   Updated: 2026/08/17 23:32:11 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("robotomy request", 72, 45), _target("undefined")
{
	std::cout << "Robotomy Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
	: AForm(obj), _target(obj._target)
{
	std::cout << "Robotomy Copy Constructor Called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	std::cout << "Robotomy Operator = Called" << std::endl;
	if(this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("robotomy request", 72, 45), _target(target)
{
	std::cout << "Robotomy Parametrized Constructor Called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{

}

const std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

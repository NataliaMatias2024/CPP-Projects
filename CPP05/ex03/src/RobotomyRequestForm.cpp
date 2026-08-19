/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:50:03 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 15:14:32 by namatias         ###   ########.fr       */
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
	this->checkExecute(executor);

	std::cout << "zzzt, zzzt, zzzt! (Drilling noises...)" << std::endl;
	
	/*
	** As requested by the subject, the success rate needs to be 50%.
	** We achieve this by checking if the generated random number is even (rand() % 2 == 0).
	*/
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy on " << this->getTarget() << " failed." << std::endl;
}

const std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

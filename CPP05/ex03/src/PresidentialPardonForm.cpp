/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 22:31:22 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 15:14:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("presidential pardon", 25, 5), _target("undefined")
{
	std::cout << "Presidential Default Constructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	: AForm(obj), _target(obj._target)
{
	std::cout << "Presidential Copy Constructor Called" << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	std::cout << "Presidential Operator = Called" << std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Destructor Called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("presidential pardon", 25, 5), _target(target)
{
	std::cout << "Presidential Parametrized Constructor Called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->checkExecute(executor);

	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:10:49 by namatias          #+#    #+#             */
/*   Updated: 2026/08/17 23:31:43 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("shrubbery creation", 145, 137), _target("undefined")
{
	std::cout << "Shrubbery Default Constructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
	: AForm(obj), _target(obj._target)
{
	std::cout << "Shrubbery Copy Constructor Called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	std::cout << "Shrubbery Operator = Called" << std::endl;
	if (this != &obj)
	{
		AForm::operator=(obj);
		this->_target = obj._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor Called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("shrubbery creation", 145, 137), _target(target)
{
	std::cout << "Shrubbery Parametrized Constructor Called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{

}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

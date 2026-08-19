/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 19:00:18 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 19:54:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& obj)
{
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
	if (this != &obj)
	{
		(void)obj;
	}
	return (*this);
}

Intern::~Intern()
{
}

AForm*	Intern::makeForm(const std::string& nameForm, const std::string& target)
{
	static std::string menu[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	AForm *(Intern::*ArrayForm[3])(const std::string&) = {&Intern::makeShrubberyCreationForm, 
														  &Intern::makeRobotomyRequestForm, 
														  &Intern::makePresidentialPardonForm};
	for(int i = 0; i < 3; i++)
	{
		if (nameForm == menu[i])
		{
			AForm* formToReturn = (this->*ArrayForm[i])(target);
			std::cout << "Intern creates " << formToReturn->getName() << "." << std::endl;
			return (formToReturn);
		}
	}
	std::cout << "Intern couldn't create " << nameForm << " because it doesn't exist." << std::endl;
	return (NULL);
}

AForm*	Intern::makeShrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm (target));
} 

AForm*	Intern::makeRobotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm (target));
} 
AForm*	Intern::makePresidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 10:53:34 by namatias          #+#    #+#             */
/*   Updated: 2026/08/12 15:24:24 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(1)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): _name(obj.getName()), _grade(obj.getGrade())
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

//TODO: Exceptions

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
	// if (grade > 150)
	// 	throw Bureaucrat::GradeTooLowException();
	// if (grade < 1)
	// 	throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

const std::string& Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	// if (this->_grade - 1 < 1)
	// 	throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	// if (this->_grade + 1 > 150)
	// 	throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 10:53:34 by namatias          #+#    #+#             */
/*   Updated: 2026/08/14 11:59:42 by namatias         ###   ########.fr       */
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

/*
** The custom exception class, is a class inside our principal class
** so to acess them we nede to use PrincipalClass::CustomClass::CustomClassConstructor
*/

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& message): _message(message)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

/*
** To return a const char* we need to use c_str() 
** so the compiler understand that the message std::string is actualy a const char*
*/
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (this->_message.c_str());
}


Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& message): _message(message)
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

/*
** To return a const char* we need to use c_str() 
** so the compiler understand that the message std::string is actualy a const char*
*/
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (this->_message.c_str());
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat grade falls below minimum limit (150)");
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat grade exceeds maximum limit (1)");
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
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat grade exceeds maximum limit (1)");
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat grade falls below minimum limit (150)");
	this->_grade += 1;
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj)
{
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (output);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:09:47 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 17:54:00 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _nameForm("default"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "AForm Default Constructor Called" << std::endl;
}

AForm::AForm(const AForm& obj): _nameForm(obj.getName()), _isSigned(obj.getIsSigned()),
							_gradeSign(obj.getGradeSign()), _gradeExec(obj.getGradeExec())
{
	std::cout << "AForm Copy Called" << std::endl;
}

AForm& AForm::operator=(const AForm& obj)
{
	std::cout << "AForm Operator = Called" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj.getIsSigned();
	}
	return(*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor Called" << std::endl;
}

/*
** Parametrized Constructor
*/
AForm::AForm(const std::string& name, const int gradeSign, const int gradeExec)
	: _nameForm(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "AForm Parametrized Constructor Called" << std::endl;
	if (gradeSign > 150)
		throw AForm::GradeTooLowException("Grade to Sign too low ! It should be 150 or lower");
	if (gradeSign < 1)
		throw AForm::GradeTooHighException("Grade to Sign too High ! It should be 1 or bigger");
	if (gradeExec > 150)
		throw AForm::GradeTooLowException("Exec grade is too low! It should be 150 or lower");
	if (gradeExec < 1)
		throw AForm::GradeTooHighException("Exec grade is too high! It should be 1 or bigger");
}


/*
** AForm::GradeTooHighException
*/
AForm::GradeTooHighException::GradeTooHighException(const std::string& message): _messageForm(message)
{
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return (this->_messageForm.c_str());
}


/*
** AForm::GradeTooLowException
*/
AForm::GradeTooLowException::GradeTooLowException(const std::string& message): _messageForm(message)
{
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return (this->_messageForm.c_str());
}

AForm::FormUnsignedException::FormUnsignedException(const std::string& message): _messageForm(message)
{
}

AForm::FormUnsignedException::~FormUnsignedException() throw()
{
}

const char* AForm::FormUnsignedException::what() const throw()
{
	return (this->_messageForm.c_str());
}



const std::string 	AForm::getName() const
{
	return (this->_nameForm);
}

bool				AForm::getIsSigned() const
{
	return (this->_isSigned);
}

const int			AForm::getGradeSign() const
{
	return (this->_gradeSign);
}

const int			AForm::getGradeExec() const
{
	return (this->_gradeExec);
}

void				AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException("Bureaucrat grade is too low to sign this form!");
	this->_isSigned = true;
}

void	AForm::checkExecute(const Bureaucrat& executor) const
{
	if (!this->_isSigned)
		throw AForm::FormUnsignedException("This form must be signed before this action!");
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException("Bureaucrat grade is too low to execute this form!");
}


std::ostream& operator<<(std::ostream& output, const AForm& form)
{
	output << form.getName() << " form | Grade to sign: " << form.getGradeSign();
	output << " | Grade to exec: " << form.getGradeExec();
	return (output);
}
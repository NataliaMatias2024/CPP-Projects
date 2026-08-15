/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:09:47 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 17:54:00 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _nameForm("default"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
}

Form::Form(const Form& obj): _nameForm(obj.getName()), _isSigned(obj.getIsSigned()),
							_gradeSign(obj.getGradeSign()), _gradeExec(obj.getGradeExec())
{
}

Form& Form::operator=(const Form& obj)
{
	std::cout << "Operator= called" << std::endl;
	if (this != &obj)
	{
		this->_isSigned = obj.getIsSigned();
	}
	return(*this);
}

Form::~Form()
{
}

/*
** Parametrized Constructor
*/
Form::Form(const std::string& name, const int gradeSign, const int gradeExec): _nameForm(name),
							 _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign > 150)
		throw Form::GradeTooLowException("Grade to Sign too low ! It should be 150 or lower");
	if (gradeSign < 1)
		throw Form::GradeTooHighException("Grade to Sign too High ! It should be 1 or bigger");
	if (gradeExec > 150)
		throw Form::GradeTooLowException("Grade to Exec too low ! It should be 150 or lower");
	if (gradeExec < 1)
		throw Form::GradeTooHighException("Grade to Exec too High ! It should be 1 or bigger");
}


/*
** Form::GradeTooHighException
*/
Form::GradeTooHighException::GradeTooHighException(const std::string& message): _messageForm(message)
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return (this->_messageForm.c_str());
}


/*
** Form::GradeTooLowException
*/
Form::GradeTooLowException::GradeTooLowException(const std::string& message): _messageForm(message)
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (this->_messageForm.c_str());
}

const std::string 	Form::getName() const
{
	return (this->_nameForm);
}

bool				Form::getIsSigned() const
{
	return (this->_isSigned);
}

const int			Form::getGradeSign() const
{
	return (this->_gradeSign);
}

const int			Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void				Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_gradeSign < bureaucrat.getGrade())
		throw GradeTooLowException("Bureaucrat grade is too low to sign this form!");
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& output, const Form& form)
{
	output << form.getName() << " form | Grade to sign: " << form.getGradeSign();
	output << " | Grade to exec: " << form.getGradeExec();
	return (output);
}
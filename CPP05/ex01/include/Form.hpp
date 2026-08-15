/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:41:33 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 17:34:28 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string	_nameForm;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;
	public:
		Form();
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();

		/*
		** Parametrized Constructor
		*/
		Form(const std::string&, const int, const int);

		/*
		** Form::GradeTooHighException
		*/
		class GradeTooHighException : public std::exception
		{
			private:
				const	std::string	_messageForm;
			public:
				GradeTooHighException(const std::string&);
				virtual	~GradeTooHighException() throw();

				virtual	const char* what() const throw();
		};
		
		/*
		** Form::GradeTooLowException
		*/
		class GradeTooLowException : public std::exception
		{
			private:
				const	std::string	_messageForm;
			public:
				GradeTooLowException(const std::string&);
				virtual	~GradeTooLowException() throw();

				virtual	const char* what() const throw();	
		};

		const std::string 	getName() const;
		bool				getIsSigned() const;
		const int			getGradeSign() const;
		const int			getGradeExec() const;

		void				beSigned(const Bureaucrat&);
};

std::ostream& operator<<(std::ostream&, const Form&);

#endif
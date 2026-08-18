/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:41:33 by namatias          #+#    #+#             */
/*   Updated: 2026/08/17 22:49:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_nameForm;
		bool				_isSigned;
		const int			_gradeSign;
		const int			_gradeExec;
	public:
		AForm();
		AForm(const AForm&);
		AForm& operator=(const AForm&);
		virtual ~AForm();

		/*
		** Parametrized Constructor
		*/
		AForm(const std::string&, const int, const int);

		/*
		** AForm::GradeTooHighException
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
		** AForm::GradeTooLowException
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

		virtual void				execute(const Bureaucrat& executor) const = 0;
		virtual const std::string	getTarget() const = 0;
};

std::ostream& operator<<(std::ostream&, const AForm&);

#endif
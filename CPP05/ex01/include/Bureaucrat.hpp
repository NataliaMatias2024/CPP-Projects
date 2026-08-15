/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:34:18 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 17:34:26 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		/*
		** Initialize Parameterized
		*/
		Bureaucrat(const std::string&, int);

		/*
		** Custom exceptions classes stay inside our class and
		** they inherit from the std::exception class fom c++ library
		*/
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(const std::string&);
				virtual ~GradeTooHighException() throw();

				virtual const char* what() const throw();

			private:
				std::string _message;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(const std::string&);
				virtual ~GradeTooLowException() throw();

				virtual const char* what() const throw();

			private:
				std::string _message;
		};

		const std::string&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		void			 	signForm(Form&) const;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif

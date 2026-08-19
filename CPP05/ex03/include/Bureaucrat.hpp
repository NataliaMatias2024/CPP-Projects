/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:34:18 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 13:05:05 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class AForm;

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

		Bureaucrat(const std::string&, int);

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

		void			 	signForm(AForm&) const;
		void 				executeForm(AForm const & form) const;

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif

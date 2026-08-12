/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 12:34:18 by namatias          #+#    #+#             */
/*   Updated: 2026/08/12 15:31:39 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int		_grade; /* Can go from 1 to 150 */
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		/*Initialize Parametrizade*/
		Bureaucrat(const std::string&, int);

		/*virtual const char* what() const throw();*/
		class GradeTooHighException : public std::exception
		{
			public:
			GradeTooHighException(const std::string& message);
			virtual ~GradeTooHighException() throw();

			virtual const char* what() const throw();

			private:
				std::string _message;
		};
		class GradeTooLowException : public std::exception
		{
			public:
			GradeTooLowException(const std::string& message);
			~GradeTooLowException() throw();

			virtual const char* what() const throw();

			private:
				std::string _message;
		};

		const std::string&	getName() const;
		int					getGrade() const;
		void				setGrade(int);
		void				incrementGrade();
		void				decrementGrade();

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif

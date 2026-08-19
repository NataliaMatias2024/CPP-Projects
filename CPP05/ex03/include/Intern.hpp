/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:33:34 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 19:52:24 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		~Intern();

		AForm*	makeForm(const std::string&, const std::string&);

		AForm*	makeShrubberyCreationForm(const std::string&);
		AForm*	makeRobotomyRequestForm(const std::string&);
		AForm*	makePresidentialPardonForm(const std::string&);
};

#endif
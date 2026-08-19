/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:09:14 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 20:51:44 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "Style.hpp"

int main()
{
	Style style;

	/* ---------------------------------------------------------- */
	{
		style.headerTest("Intern: Creating Valid Forms");

		Intern      someRandomIntern;
		Bureaucrat  boss("Maximus", 1);
		AForm* 		forms[3];
		int         i = 0;

		Style::TestEntry validTests[3];

		
		forms[0] = someRandomIntern.makeForm("shrubbery creation", "Home");
		if (forms[0])
			validTests[i++] = style.makeEntry("Create Form", forms[0]->getName(), true, "Target = " + forms[0]->getTarget());
		else
			validTests[i++] = style.makeEntry("Create Form", "shrubbery creation", false, "Failed to create form");
		
		std::cout << std::endl;
		std::cout << std::endl;

		forms[1] = someRandomIntern.makeForm("robotomy request", "Bender");
		if (forms[1])
			validTests[i++] = style.makeEntry("Create Form", forms[1]->getName(), true, "Target = " + forms[1]->getTarget());
		else
			validTests[i++] = style.makeEntry("Create Form", "robotomy request", false, "Failed to create form");

		std::cout << std::endl;
		std::cout << std::endl;
		
		forms[2] = someRandomIntern.makeForm("presidential pardon", "Natalia");
		if (forms[2])
			validTests[i++] = style.makeEntry("Create Form", forms[2]->getName(), true, "Target = " + forms[2]->getTarget());
		else
			validTests[i++] = style.makeEntry("Create Form", "presidential pardon", false, "Failed to create form");
		
		std::cout << std::endl;
		std::cout << std::endl;

		style.printResultsTable(validTests, i);
		std::cout << std::endl;

		style.headerTest("Bureaucrat Executing Intern's Forms");
		std::srand(std::time(0));
		for (int j = 0; j < 3; j++)
		{
			if (forms[j])
			{
				boss.signForm(*forms[j]);
				boss.executeForm(*forms[j]);
				delete forms[j];
				std::cout << std::endl;
			}
		}
	}
	/* ---------------------------------------------------------- */
   {
		style.headerTest("Intern: Invalid Form Names (Error Handling)");

		Intern				someRandomIntern;
		AForm*				invalidForm = NULL;
		Style::TestEntry	invalidTests[2];
		int					i = 0;

		std::cout << "Expecting explicit error messages below:\n" << std::endl;

		
		invalidForm = someRandomIntern.makeForm("coffee request", "Boss");
		if (invalidForm == NULL)
			invalidTests[i++] = style.makeEntry("Unknown Form", "coffee request", true, "Returned NULL as expected");
		else
		{
			invalidTests[i++] = style.makeEntry("Unknown Form", "coffee request", false, "Should have returned NULL!");
			delete invalidForm;
		}

	
		invalidForm = someRandomIntern.makeForm("tax evasion", "Gov");
		if (invalidForm == NULL)
			invalidTests[i++] = style.makeEntry("Unknown Form", "tax evasion", true, "Returned NULL as expected");
		else
		{
			invalidTests[i++] = style.makeEntry("Unknown Form", "tax evasion", false, "Should have returned NULL!");
			delete invalidForm;
		}

		style.printResultsTable(invalidTests, i);
		std::cout << std::endl;
	}

	return (0);
}
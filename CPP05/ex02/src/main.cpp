/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:09:14 by namatias          #+#    #+#             */
/*   Updated: 2026/08/18 15:29:55 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Style.hpp"

int main()
{
	Style style;

	/* ---------------------------------------------------------- */
	{
		style.headerTest("Shrubbery Creation: Polymorphic Constructors");
		AForm *polyDefault = new ShrubberyCreationForm();
		std::cout << std::endl;

		AForm *polyParametrized = new ShrubberyCreationForm("Makefile");
		std::cout << std::endl;
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus("Default constructor ", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
		style.displayStatus("					", polyDefault->getName(), "Grade to exec = " + toString(polyDefault->getGradeExec()));
		style.displayStatus("					", polyDefault->getName(), "Target = " + polyDefault->getTarget());
		style.displayStatus("Parametrized constructor", polyParametrized->getName(), "Grade to sign = " + toString(polyParametrized->getGradeSign()));
		style.displayStatus("					", polyParametrized->getName(), "Grade to exec = " + toString(polyParametrized->getGradeExec()));
		style.displayStatus("					", polyParametrized->getName(), "Target = " + polyParametrized->getTarget());
		
		std::cout << std::endl;
		
		delete polyDefault;
		delete polyParametrized;

		std::cout << std::endl;
		std::cout << std::endl;

		style.headerTest("Shrubbery Creation: Copy and Assignment");
		
		ShrubberyCreationForm def;
		std::cout << std::endl;
		
		ShrubberyCreationForm test("TestFile");
		std::cout << std::endl;
		
		ShrubberyCreationForm CopyObj(test);
		std::cout << std::endl;
		
		def = CopyObj;
		std::cout << std::endl;
		
		std::cout << std::endl;
		
		style.headerTable();
		style.displayStatus("Copy constructor   ", CopyObj.getName(), "Grade to sign = " + toString(CopyObj.getGradeSign()));
		style.displayStatus("					", CopyObj.getName(), "Grade to exec = " + toString(CopyObj.getGradeExec()));
		style.displayStatus("					", CopyObj.getName(), "Target = " + CopyObj.getTarget());
		style.displayStatus("Operator =         ", def.getName(), "Grade to sign = " + toString(def.getGradeSign()));
		style.displayStatus("					", def.getName(), "Grade to exec = " + toString(def.getGradeExec()));
		style.displayStatus("					", def.getName(), "Target = " + def.getTarget());

		std::cout << std::endl;
	}
		/* ---------------------------------------------------------- */
	{
		std::cout << std::endl;
		
		style.headerTest("Robotomy Request: Polymorphic Constructors");
		AForm *polyDefault = new RobotomyRequestForm();
		std::cout << std::endl;

		AForm *polyParametrized = new RobotomyRequestForm("Makefile");
		std::cout << std::endl;
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus("Default constructor ", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
		style.displayStatus("					", polyDefault->getName(), "Grade to exec = " + toString(polyDefault->getGradeExec()));
		style.displayStatus("					", polyDefault->getName(), "Target = " + polyDefault->getTarget());
		style.displayStatus("Parametrized constructor", polyParametrized->getName(), "Grade to sign = " + toString(polyParametrized->getGradeSign()));
		style.displayStatus("					", polyParametrized->getName(), "Grade to exec = " + toString(polyParametrized->getGradeExec()));
		style.displayStatus("					", polyParametrized->getName(), "Target = " + polyParametrized->getTarget());
		
		std::cout << std::endl;
		
		delete polyDefault;
		delete polyParametrized;

		std::cout << std::endl;
		std::cout << std::endl;

		style.headerTest("Robotomy Request: Copy and Assignment");
		
		RobotomyRequestForm def;
		std::cout << std::endl;
		
		RobotomyRequestForm test("TestFile");
		std::cout << std::endl;
		
		RobotomyRequestForm CopyObj(test);
		std::cout << std::endl;
		
		def = CopyObj;
		std::cout << std::endl;
		
		std::cout << std::endl;
		
		style.headerTable();
		style.displayStatus("Copy constructor   ", CopyObj.getName(), "Grade to sign = " + toString(CopyObj.getGradeSign()));
		style.displayStatus("					", CopyObj.getName(), "Grade to exec = " + toString(CopyObj.getGradeExec()));
		style.displayStatus("					", CopyObj.getName(), "Target = " + CopyObj.getTarget());
		style.displayStatus("Operator =         ", def.getName(), "Grade to sign = " + toString(def.getGradeSign()));
		style.displayStatus("					", def.getName(), "Grade to exec = " + toString(def.getGradeExec()));
		style.displayStatus("					", def.getName(), "Target = " + def.getTarget());

		std::cout << std::endl;
	}
		/* ---------------------------------------------------------- */
	{
		std::cout << std::endl;
		
		style.headerTest("Presidential Pardon: Polymorphic Constructors");
		AForm *polyDefault = new PresidentialPardonForm();
		std::cout << std::endl;

		AForm *polyParametrized = new PresidentialPardonForm("Makefile");
		std::cout << std::endl;
		std::cout << std::endl;

		style.headerTable();
		style.displayStatus("Default constructor ", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
		style.displayStatus("					", polyDefault->getName(), "Grade to exec = " + toString(polyDefault->getGradeExec()));
		style.displayStatus("					", polyDefault->getName(), "Target = " + polyDefault->getTarget());
		style.displayStatus("Parametrized constructor", polyParametrized->getName(), "Grade to sign = " + toString(polyParametrized->getGradeSign()));
		style.displayStatus("					", polyParametrized->getName(), "Grade to exec = " + toString(polyParametrized->getGradeExec()));
		style.displayStatus("					", polyParametrized->getName(), "Target = " + polyParametrized->getTarget());
		
		std::cout << std::endl;
		
		delete polyDefault;
		delete polyParametrized;

		std::cout << std::endl;
		std::cout << std::endl;


		style.headerTest("Presidential Pardon: Copy and Assignment");
		
		PresidentialPardonForm def;
		std::cout << std::endl;
		
		PresidentialPardonForm test("TestFile");
		std::cout << std::endl;
		
		PresidentialPardonForm CopyObj(test);
		std::cout << std::endl;
		
		def = CopyObj;
		std::cout << std::endl;
		
		std::cout << std::endl;
		
		style.headerTable();
		style.displayStatus("Copy constructor   ", CopyObj.getName(), "Grade to sign = " + toString(CopyObj.getGradeSign()));
		style.displayStatus("					", CopyObj.getName(), "Grade to exec = " + toString(CopyObj.getGradeExec()));
		style.displayStatus("					", CopyObj.getName(), "Target = " + CopyObj.getTarget());
		style.displayStatus("Operator =         ", def.getName(), "Grade to sign = " + toString(def.getGradeSign()));
		style.displayStatus("					", def.getName(), "Grade to exec = " + toString(def.getGradeExec()));
		style.displayStatus("					", def.getName(), "Target = " + def.getTarget());

		std::cout << std::endl;
	}
		/* ---------------------------------------------------------- */
	{
		std::cout << std::endl;

		/*
		** srand initializes the random number generator using the current time as a seed.
		** Since the time is always changing, the generated numbers will change too.
		*/
		std::srand(std::time(0));

		style.headerTest("Execution of the 3 different forms");
		std::cout << std::endl;
		

		Bureaucrat	bureaucrat("Maximus", 1);
		ShrubberyCreationForm	shrubbery("home");
		std::cout << std::endl;

		RobotomyRequestForm		robotomy("home_robotomy");
		std::cout << std::endl;

		PresidentialPardonForm	presidente("Natalia");
		std::cout << std::endl;
		std::cout << std::endl;

		bureaucrat.signForm(shrubbery);
		bureaucrat.signForm(robotomy);
		bureaucrat.signForm(presidente);
		std::cout << std::endl;
		std::cout << std::endl;

		bureaucrat.executeForm(shrubbery);
		std::cout << std::endl;

		bureaucrat.executeForm(robotomy);
		std::cout << std::endl;

		bureaucrat.executeForm(presidente);
		std::cout << std::endl;
		
		std::cout << std::endl;
	}
	/* ---------------------------------------------------------- */
    {
        std::cout << std::endl;
        style.headerTest("Execution Exceptions and Boundaries (Sad Paths)");
        
		Style::TestEntry errorTests[5];
		int k = 0;

		Bureaucrat            noob("Noob", 150);
		Bureaucrat            midLevel("MidLevel", 140);
        ShrubberyCreationForm shrubbery("Garden");
		std::cout << std::endl;
	
        try
		{
			shrubbery.execute(midLevel);
			errorTests[k++] = style.makeEntry("Exec Unsigned Form", shrubbery.getName(), false, "Executed without signature!");
		}
		catch (const std::exception& e)
		{
			errorTests[k++] = style.makeEntry("Exec Unsigned Form", shrubbery.getName(), true, e.what());
		}

        try
		{
			shrubbery.beSigned(noob);
			errorTests[k++] = style.makeEntry("Sign Low Grade", shrubbery.getName(), false, "Signed with grade 150!");
		}
		catch (const std::exception& e)
		{
			errorTests[k++] = style.makeEntry("Sign Low Grade", shrubbery.getName(), true, e.what());
		}

        try
		{
			shrubbery.beSigned(midLevel);
			errorTests[k++] = style.makeEntry("Sign Valid Grade", shrubbery.getName(), true, "Signed successfully");
		}
		catch (const std::exception& e)
		{
			errorTests[k++] = style.makeEntry("Sign Valid Grade", shrubbery.getName(), false, e.what());
		}

		try
		{
			shrubbery.execute(midLevel);
			errorTests[k++] = style.makeEntry("Exec Low Grade", shrubbery.getName(), false, "Executed with grade 140!");
		}
		catch (const std::exception& e)
		{
			errorTests[k++] = style.makeEntry("Exec Low Grade", shrubbery.getName(), true, e.what());
		}

		style.printResultsTable(errorTests, k);
        std::cout << std::endl;
    }
	
	std::cout << std::endl;
	return (0);
}

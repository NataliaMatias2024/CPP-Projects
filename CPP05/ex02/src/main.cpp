/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:09:14 by namatias          #+#    #+#             */
/*   Updated: 2026/08/17 23:32:38 by namatias         ###   ########.fr       */
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
		style.displayStatus("Default constructor", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
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
		style.displayStatus("Default constructor", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
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
		style.displayStatus("Default constructor", polyDefault->getName(), "Grade to sign = " + toString(polyDefault->getGradeSign()));
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
	// style.headerTest("Grade Boundaries (exceptions)");

	// Style::TestEntry boundaryTests[5];
	// int i = 0;

	// try
	// {
	// }
	// catch (std::exception& e)
	// {
	// }

	// style.printResultsTable(boundaryTests, i);
	// std::cout << std::endl;
	// std::cout << std::endl;

	// /* ---------------------------------------------------------- */
	// style.headerTest("beSigned Test");

	// Style::TestEntry signedTests[5];
	// int j = 0;

	// AForm form("contract", 1, 100);
	// Bureaucrat bureaucrat("Marvin", 1);
	// Bureaucrat testb("Noob", 150);

	// try
	// {
	// 	signedTests[j++] = style.makeEntry("Bureaucrat Status", testb.getName(), true, "Grade = " + toString(testb.getGrade()));
	// }
	// catch(const std::exception& e)
	// {
	// 	signedTests[j++] = style.makeEntry("Bureaucrat Status", testb.getName(), false, e.what());
	// }
	

	// testb.signForm(form);
	// signedTests[j++] = style.makeEntry("Form After Noob try", form.getName(), true, "Signed Status = " + toString(form.getIsSigned()));
	// std::cout << std::endl;

	// bureaucrat.signForm(form);
	// signedTests[j++] = style.makeEntry("Form After Marvin try", form.getName(), true, "Signed Status = " + toString(form.getIsSigned()));
	// std::cout << std::endl;
		
	// style.printResultsTable(signedTests, j);
	// std::cout << std::endl;
	// std::cout << std::endl;

	// /* ---------------------------------------------------------- */
	// style.headerTest("operator<<");
		
	// std::cout << std::endl;
	// return (0);
}

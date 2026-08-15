/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 00:09:14 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 17:34:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Style.hpp"

int main()
{
	Style style;

	/* ---------------------------------------------------------- */
	style.headerTest("Orthodox Canonical Form");	
	style.headerTable();

	Form def;
	style.displayStatus("default constructor", def.getName(), "grade to sign = " + toString(def.getGradeSign()));
	style.displayStatus("default constructor", def.getName(), "grade to exec = " + toString(def.getGradeExec()));

	Form contract("Contract42", 42, 1);
	style.displayStatus("parametrizad constructor", contract.getName(), "grade to sign = " + toString(contract.getGradeSign()));
	style.displayStatus("parametrizad constructor", contract.getName(), "grade to exec = " + toString(contract.getGradeExec()));

	Form copyObj(contract);
	style.displayStatus("copy constructor", copyObj.getName(), "grade to sign = " + toString(copyObj.getGradeSign()));
	style.displayStatus("copy constructor", copyObj.getName(), "grade to exec = " + toString(copyObj.getGradeExec()));
	
	/*
	** Copies only the status isSigned. 
	** The others variables are a constant type and cannot be modified after creation.
	*/
	Form assigment("Assigment", 1, 95);
	assigment = def;
	std::string nameCheck = (assigment.getName() == "Assigment") ? "[name preserv]" : "[ERRO: orig. name lost]";
	style.displayStatus("operator=", assigment.getName(), "Grade Sign = " + toString(assigment.getGradeSign()) + " " + nameCheck);
	style.displayStatus("operator=", assigment.getName(), "Grade Exec = " + toString(assigment.getGradeExec()) + " " + nameCheck);

	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("Grade Boundaries (exceptions)");

	Style::TestEntry boundaryTests[5];
	int i = 0;

	try
	{
		Form a("Edge Low and High", 150, 1);
		boundaryTests[i++] = style.makeEntry("Grade: Sign = 150 | Exec = 1", a.getName(), true,  "Grade Sign = " + toString(a.getGradeSign()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade: Sign = 150 | Exec = 1", "Edge Low and High", false, e.what());
	}

	try
	{
		Form b("Too Low Sign", 151, 1);
		boundaryTests[i++] = style.makeEntry("Grade to Sign = 151 -> GradeTooLowException", b.getName(), false,  "Grade Sign = " + toString(b.getGradeSign()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade to Sign = 151 -> GradeTooLowException", "Too Low Sign", true, e.what());
	}

	try
	{
		Form c("Too Low Exec", 1, 151);
		boundaryTests[i++] = style.makeEntry("Grade to Exec = 151 -> GradeTooLowException", c.getName(), false,  "Grade Sign = " + toString(c.getGradeSign()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade to Exec = 151 -> GradeTooLowException", "Too Low Exec", true, e.what());
	}

	try
	{
		Form d("Too High Exec", 1, 0);
		boundaryTests[i++] = style.makeEntry("Grade to Exec = 0 -> GradeTooHighException", d.getName(), false,  "Grade Sign = " + toString(d.getGradeSign()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade to Exec = 0 -> GradeTooHighException", "Too High Exec", true, e.what());
	}

	try
	{
		Form d("Too High Sign Neg", -1, 200);
		boundaryTests[i++] = style.makeEntry("Grade to Sign = -1", d.getName(), true,  "Grade to Sign = " + toString(d.getGradeSign()));
	}
	catch (Form::GradeTooHighException& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade to Sign = -1 -> GradeTooHighException", "Too High Sign Neg", true, e.what());
	}
	catch (Form::GradeTooLowException& e)
	{
		boundaryTests[i++] = style.makeEntry("Grade to Exec = 200 -> GradeTooLowException", "Too High Sign Neg", false, e.what());
	}

	style.printResultsTable(boundaryTests, i);
	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("beSigned Test");

	Style::TestEntry signedTests[5];
	int j = 0;

	Form form("contract", 1, 100);
	Bureaucrat bureaucrat("Marvin", 1);
	Bureaucrat testb("Noob", 150);

	try
	{
		signedTests[j++] = style.makeEntry("Form Status", form.getName(), true, "Signed Status = " + toString(form.getIsSigned()));
	}
	catch(const std::exception& e)
	{
		signedTests[j++] = style.makeEntry("Form Status", form.getName(), false, e.what());
	}

	try
	{
		signedTests[j++] = style.makeEntry("Bureaucrat Status", bureaucrat.getName(), true, "Grade = " + toString(bureaucrat.getGrade()));
	}
	catch(const std::exception& e)
	{
		signedTests[j++] = style.makeEntry("Bureaucrat Status", bureaucrat.getName(), false, e.what());
	}

	try
	{
		signedTests[j++] = style.makeEntry("Bureaucrat Status", testb.getName(), true, "Grade = " + toString(testb.getGrade()));
	}
	catch(const std::exception& e)
	{
		signedTests[j++] = style.makeEntry("Bureaucrat Status", testb.getName(), false, e.what());
	}
	

	testb.signForm(form);
	signedTests[j++] = style.makeEntry("Form After Noob try", form.getName(), true, "Signed Status = " + toString(form.getIsSigned()));
	std::cout << std::endl;

	bureaucrat.signForm(form);
	signedTests[j++] = style.makeEntry("Form After Marvin try", form.getName(), true, "Signed Status = " + toString(form.getIsSigned()));
	std::cout << std::endl;
	

	// try
	// {
	// 	bureaucrat.signForm(form);
	// 	signedTests[j++] = style.makeEntry("Form New Status", form.getName(), true, "Grade = " + toString(form.getIsSigned()));
	// }
	// catch(const std::exception& e)
	// {
	// 	signedTests[j++] = style.makeEntry("Form Status", form.getName(), false, e.what());
	// }
	
	
	style.printResultsTable(signedTests, j);
	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("operator<<");

	Form printable("Printable", 42, 42);
	std::cout << printable << std::endl;

	Form test("CPP05", 100, 5);
	std::cout << test << std::endl;
	return (0);
}

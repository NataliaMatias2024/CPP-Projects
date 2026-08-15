#include "Bureaucrat.hpp"
#include "Style.hpp"

int main()
{
	Style style;

	/* ---------------------------------------------------------- */
	style.headerTest("Orthodox Canonical Form");
	style.headerTable();

	Bureaucrat def;
	style.displayStatus("default constructor", def.getName(), "grade = " + toString(def.getGrade()));

	Bureaucrat alice("Alice", 50);
	style.displayStatus("param constructor", alice.getName(), "grade = " + toString(alice.getGrade()));

	Bureaucrat copyObj(alice);
	style.displayStatus("copy constructor", copyObj.getName(), "grade = " + toString(copyObj.getGrade()));

	/*
	** Copies only the grade. The name is a constant string and cannot be modified after creation.
	*/
	Bureaucrat assigment("Assigment", 120);
	assigment = alice;
	std::string nameCheck = (assigment.getName() == "Assigment") ? "[name preserv]" : "[ERRO: orig. name lost]";
	style.displayStatus("operator= (only grade)", assigment.getName(), "grade = " + toString(assigment.getGrade()) + " " + nameCheck);

	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("Grade Boundaries (exceptions)");

	Style::TestEntry boundaryTests[5];
	int i = 0;

	try
	{
		Bureaucrat b("Edge Low", 150);
		boundaryTests[i++] = style.makeEntry("grade = 150 (min valid)", b.getName(), true,  "grade = " + toString(b.getGrade()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 150 (min valid)", "Edge Low", false, e.what());
	}

	try
	{
		Bureaucrat b("Edge High", 1);
		boundaryTests[i++] = style.makeEntry("grade = 1 (max valid)", b.getName(), true,  "grade = " + toString(b.getGrade()));
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 1 (max valid)", "Edge High", false, e.what());
	}

	/*
	** When we have multiple catch blocks, only one will be triggered.
	** They should be ordered from the most specific to the most generic.
	*/
	try
	{
		Bureaucrat b("Too Low", 151);
		boundaryTests[i++] = style.makeEntry("grade = 151 -> GradeTooLowException", b.getName(), false, "grade = " + toString(b.getGrade()));
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 151 -> GradeTooLowException", "Too Low", true, e.what());
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 151 -> GradeTooLowException", "Too Low",  false, e.what());
	}

	try
	{
		Bureaucrat b("Too High Zero", 0);
		boundaryTests[i++] = style.makeEntry("grade = 0 -> GradeTooHighException", b.getName(), false, "grade = " + toString(b.getGrade()));
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 0 -> GradeTooHighException", "Too High Zero", true, e.what());
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = 0 -> GradeTooHighException", "Too High Zero", false, e.what());
	}

	try
	{
		Bureaucrat b("Too High Negative", -5);
		boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", b.getName(), false, "grade = " + toString(b.getGrade()));
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", "Too High Negative", true, e.what());
	}
	catch (std::exception& e)
	{
		boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", "Too High Negative", false, e.what());
	}

	/*
	** UNCOMMENT TO BREAK COMPILATION
	** Catching a base class (std::exception) before a derived class
	** will trigger a compiler error and stop the compilation
	*/

	/* 
		try
		{
			Bureaucrat b("Too High Negative", -5);
			boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", b.getName(), false, "grade = " + toString(b.getGrade()));
		}
		catch (std::exception& e)
		{
			boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", "Too High Negative", true, e.what());
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			boundaryTests[i++] = style.makeEntry("grade = -5 -> GradeTooHighException", "Too High Negative", false, e.what());
		}
	*/

	style.printResultsTable(boundaryTests, i);
	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("increment / decrement");

	Style::TestEntry incDecTests[4];
	i = 0;

	try
	{
		Bureaucrat b("Inc", 50);
		b.incrementGrade();
		incDecTests[i++] = style.makeEntry("incrementGrade (expected 50->49)", b.getName(), true, "grade = " + toString(b.getGrade()));
	}
	catch (std::exception& e)
	{
		incDecTests[i++] = style.makeEntry("incrementGrade (expected 50->49)", "Inc", false, e.what());
	}

	try
	{
		Bureaucrat b("Dec", 50);
		b.decrementGrade();
		incDecTests[i++] = style.makeEntry("decrementGrade (expected 50->51)", b.getName(), true, "grade = " + toString(b.getGrade()));
	}
	catch (std::exception& e)
	{
		incDecTests[i++] = style.makeEntry("decrementGrade (expected 50->51)", "Dec", false, e.what());
	}

	try
	{
		Bureaucrat b("IncEdge", 1);
		b.incrementGrade();
		incDecTests[i++] = style.makeEntry("incrementGrade (expected 1->0)", b.getName(), false, "shouldnt work");
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		incDecTests[i++] = style.makeEntry("incrementGrade 1->0 -> GradeTooHighException","IncEdge", true, e.what());
	}
	catch (std::exception& e)
	{
		incDecTests[i++] = style.makeEntry("incrementGrade 1->0 should rise an exception", "IncEdge", false, e.what());
	}

	try
	{
		Bureaucrat b("DecEdge", 150);
		b.decrementGrade();
		incDecTests[i++] = style.makeEntry("decrementGrade (expected 150->151)", b.getName(), false, "shouldnt work");
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		incDecTests[i++] = style.makeEntry("decrementGrade 150->151 -> GradeTooLowException", "DecEdge", true, e.what());
	}
	catch (std::exception& e)
	{
		incDecTests[i++] = style.makeEntry("decrementGrade 150->151 should rise an exception", "DecEdge", false, e.what());
	}

	style.printResultsTable(incDecTests, i);
	std::cout << std::endl;
	std::cout << std::endl;

	/* ---------------------------------------------------------- */
	style.headerTest("operator<<");

	std::cout << std::endl;

	Bureaucrat printable("Printable", 42);
	std::cout << printable << std::endl;

	std::cout << std::endl;
	return (0);
}

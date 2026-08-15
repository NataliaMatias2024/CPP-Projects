/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:18:35 by namatias          #+#    #+#             */
/*   Updated: 2026/08/15 18:04:48 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Style.hpp"

static void	printBorder(size_t w1, size_t w2, size_t w3, size_t w4)
{
	std::cout << "+" << std::string(w1, '-');
	std::cout << "+" << std::string(w2, '-');
	std::cout << "+" << std::string(w3, '-');
	std::cout << "+" << std::string(w4, '-') << "+" << std::endl;
}

Style::Style() {}
Style::Style(const Style& obj) 
{ 
	(void)obj; 
}
Style& Style::operator=(const Style& obj) 
{ 
	(void)obj; 
	return (*this);
}
Style::~Style() {}

std::string	Style::truncate(const std::string& str, size_t width)
{
	std::string	clean;
	size_t		i;

	clean = str;
	i = 0;
	while (i < clean.length())
	{
		if (clean[i] == '\n' || clean[i] == '\r' || clean[i] == '\t')
			clean[i] = ' ';
		i++;
	}
	if (clean.length() <= width)
		return (clean);
	if (width == 0)
		return ("");
	return (clean.substr(0, width - 1) + ".");
}

void Style::headerTest(const std::string& message)
{
	const size_t	width = 71;
	std::string		msg = truncate(message, width);
	size_t			pad = width - msg.length();
	size_t			left = pad / 2;
	size_t			right = pad - left;

	std::cout << "+-----------------------------------------------------------------------+" << std::endl;
	std::cout << "|" << std::string(left, ' ') << msg << std::string(right, ' ') << "|" << std::endl;
	std::cout << "+-----------------------------------------------------------------------+" << std::endl;
}

void Style::headerTable()
{
	std::cout << "+--------------------+------------------+------------------------------+" << std::endl;
	std::cout << "|" << std::setw(20) << " Type " << "|";
	std::cout << std::setw(18) << " Name " << "|";
	std::cout << std::setw(30) << " Detail " << "|" << std::endl;
	std::cout << "+--------------------+------------------+------------------------------+" << std::endl;
}

void Style::displayStatus(const std::string& type, const std::string& name, const std::string& detail)
{
	std::cout << "|" << std::setw(20) << truncate(type, 20) << "|";
	std::cout << std::setw(18) << name << "|";
	std::cout << std::setw(30) << truncate(detail, 30) << "|\n";
	std::cout << "+--------------------+------------------+------------------------------+" << std::endl;
}

void Style::printResultsTable(const TestEntry* entries, size_t count)
{
	const size_t	statusWidth = 7;
	const size_t	maxTestWidth = 60;
	const size_t	maxNameWidth = 40;
	const size_t	maxDetailWidth = 55;
	size_t			testWidth;
	size_t			nameWidth;
	size_t			detailWidth;
	size_t			i;

	/* 
	** 1a looping: find the max width needed
	*/
	testWidth = std::string("Test").length();
	nameWidth = std::string("Name").length();
	detailWidth = std::string("Detail").length();
	i = 0;
	while (i < count)
	{
		if (entries[i].test.length() > testWidth)
			testWidth = entries[i].test.length();
		if (entries[i].name.length() > nameWidth)
			nameWidth = entries[i].test.length();
		if (entries[i].detail.length() > detailWidth)
			detailWidth = entries[i].detail.length();
		i++;
	}
	if (testWidth > maxTestWidth)
		testWidth = maxTestWidth;
	if (nameWidth > maxNameWidth)
		nameWidth = maxNameWidth;
	if (detailWidth > maxDetailWidth)
		detailWidth = maxDetailWidth;
	testWidth += 2;
	nameWidth += 2;
	detailWidth += 2;

	/* 
	** 2a looping: print header + lines with the widths 
	*/
	printBorder(statusWidth, testWidth, nameWidth, detailWidth);
	std::cout << "|" << std::left << std::setw(statusWidth) << " OK?" << "|";
	std::cout << std::setw(testWidth) << " Test" << "|";
	std::cout << std::setw(nameWidth) << " Name" << "|";
	std::cout << std::setw(detailWidth) << " Detail" << "|" << std::endl;
	printBorder(statusWidth, testWidth, nameWidth, detailWidth);

	i = 0;
	while (i < count)
	{
		std::string status = entries[i].passed ? " OK" : " FAIL";
		std::string test = " " + truncate(entries[i].test, testWidth - 1);
		std::string name = " " + truncate(entries[i].name, nameWidth - 1);
		std::string det = " " + truncate(entries[i].detail, detailWidth - 1);

		std::cout << "|" << std::left << std::setw(statusWidth) << status << "|";
		std::cout << std::setw(testWidth) << test << "|";
		std::cout << std::setw(nameWidth) << name << "|";
		std::cout << std::setw(detailWidth) << det << "|" << std::endl;
		printBorder(statusWidth, testWidth, nameWidth, detailWidth);
		
		i++;
	}
}

Style::TestEntry	Style::makeEntry(const std::string& test,const std::string& name, bool passed, const std::string& detail)
{
	Style::TestEntry e;

	e.test = test;
	e.name = name;
	e.passed = passed;
	e.detail = detail;
	return (e);
}

std::string toString(int number)
{
	std::ostringstream output;
	output << number;
	return (output.str());
}

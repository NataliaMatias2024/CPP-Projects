/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:11:24 by namatias          #+#    #+#             */
/*   Updated: 2026/08/14 11:59:39 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STYLE_HPP
#define STYLE_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Style
{
	public:
		struct TestEntry
		{
			std::string	test;
			std::string	name;
			bool		passed;
			std::string	detail;
		};

		Style();
		Style(const Style&);
		Style&	operator=(const Style&);
		~Style();

		void	headerTest(const std::string& message = "Initializing Tests");

		/* 
		** Table "obj status" (constructors, copy, etc.) 
		*/
		void	headerTable();
		void	displayStatus(const std::string& type, const std::string& name, const std::string& detail);

		/* 
		** Table tests, with dinamic width
		*/
		void	printResultsTable(const TestEntry* entries, size_t count);

		/*
		** Test exceptions
		*/
		Style::TestEntry makeEntry(const std::string& test, const std::string& name, bool passed, const std::string& detail);

	private:
		static std::string	truncate(const std::string& str, size_t width);
};

std::string toString(int numb);

#endif

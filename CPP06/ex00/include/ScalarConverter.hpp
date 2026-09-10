/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:26:51 by namatias          #+#    #+#             */
/*   Updated: 2026/09/10 14:44:39 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

/*
** In cases where we do not want our class to be instantiated,
** it is considered good practice to make the constructors *protected*
** this serves as a visual signal that the class is intended solely for use as a base
*/
class ScalarConverter
{
	protected:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&);
		ScalarConverter& operator=(const ScalarConverter&);
		~ScalarConverter();

	public:
		static void convert(const std::string& literal);
};

#endif

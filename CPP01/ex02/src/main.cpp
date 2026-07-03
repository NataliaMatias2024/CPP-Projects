/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 00:01:43 by namatias          #+#    #+#             */
/*   Updated: 2026/07/03 00:53:08 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	_initialString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &_initialString;
	std::string	&stringREF = _initialString;

	std::cout << "Memory Address of _initialString : " << &_initialString << std::endl;
	std::cout << "Memory Address pointed to by stringPTR : " << stringPTR << std::endl; 
	std::cout << "Memory Address of stringREF : " << &stringREF << "\n" << std::endl;

	std::cout << "_initialString value : " << _initialString << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value referenced by stringREF : " << stringREF << std::endl;

	return (0);
}
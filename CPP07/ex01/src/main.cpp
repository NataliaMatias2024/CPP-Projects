/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 20:55:21 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:27 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "AuxFunctions.hpp"

int main()
{
	{
		char		test[] = {'a', 'b', 'c', 'd'};
		const int	test1[] = {1, 2, 3};

		std::cout << "Initial Array Values:\n";
		std::cout << "Testing with char array:\n";
		iter(test, 4, print<char>);
		std::cout << "Testing with const int array:\n";
		iter(test1, 3, print<const int>);

		std::cout << "\nValues after calling iter:\n";
		iter(test, 4, toUpperInPlace);
		std::cout << "Testing with char array:\n";
		iter(test, 4, print<char>);
	}
	return (0);
}

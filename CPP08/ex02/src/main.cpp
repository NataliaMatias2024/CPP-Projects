/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:51:18 by namatias          #+#    #+#             */
/*   Updated: 2026/09/30 17:49:23 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	{
		std::cout << "=== Subject Test ===" << std::endl;

		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "=== My Test ===" << std::endl;
		std::srand(std::time(0));

		MutantStack<int> myTest;

		for (unsigned int i = 0; i < 10; ++i)
			myTest.push(std::rand() % 100);

		MutantStack<int>::iterator it = myTest.begin();
		MutantStack<int>::iterator ite = myTest.end();

		std::cout << "=== Stack Created with Random Numbers ===" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		// std::cout << "=== Testing the const interators ===" << std::endl;
		// const MutantStack<int> constMyTest = myTest;

		// MutantStack<int>::const_iterator it = myTest.begin();
		// MutantStack<int>::const_iterator ite = myTest.end();

		// std::cout << "=== Stack Created with Random Numbers ===" << std::endl;
		// while (it != ite)
		// {
		// 	std::cout << *it << std::endl;
		// 	++it;
		// }
	}
	return 0;
}

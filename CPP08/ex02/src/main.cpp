/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:51:18 by namatias          #+#    #+#             */
/*   Updated: 2026/10/02 12:50:26 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	{
		std::cout << "\n=== Subject Test ===" << std::endl;

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
		std::cout << "\n=== Random Elements & Iterators Test ===" << std::endl;
		std::srand(std::time(0));

		MutantStack<int> myTest;
		for (unsigned int i = 0; i < 5; ++i)
			myTest.push(std::rand() % 100);

		std::cout << "Printing random MutantStack:" << std::endl;
		for (MutantStack<int>::iterator it = myTest.begin(); it != myTest.end(); ++it)
			std::cout << *it << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "\n=== Const Iterator Safety Test ===" << std::endl;

		MutantStack<int> mstack;
		mstack.push(10);
		mstack.push(20);
		mstack.push(30);

		const MutantStack<int>& constStack = mstack;

		std::cout << "Printing const Stack with const iterators:" << std::endl;
		for (MutantStack<int>::const_iterator cit = constStack.begin(); cit != constStack.end(); ++cit)
			std::cout << *cit << std::endl;
		std::cout << std::endl;
	}
	return 0;
}

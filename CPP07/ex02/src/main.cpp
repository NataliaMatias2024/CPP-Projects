/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 00:08:43 by namatias          #+#    #+#             */
/*   Updated: 2026/09/26 00:30:03 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdlib.h>
#define MAX_VAL 750

int main()
{
	/*
	** Subject Main
	*/
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;
	}
	{
		/*
		** Additional Custom Tests
		*/
		std::cout << "\n=======================================" << std::endl;
		std::cout << "           CUSTOM ARRAY TESTS          " << std::endl;
		std::cout << "=======================================\n" << std::endl;

		std::cout << "\nTesting Empty Array" << std::endl;
		{
			Array<int> emptyArr;
			std::cout << "Empty array size: " << emptyArr.size() << std::endl;
			try
			{
				std::cout << "Trying to access emptyArr[0]..." << std::endl;
				emptyArr[0] = 42;
			} catch (std::exception &e) 
			{
				std::cerr << "Caught exception as expected: " << e.what() << std::endl;
			}
		}

		std::cout << "\nTesting operator = " << std::endl;
		{
			Array<std::string> strArray(2);
			strArray[0] = "42";
			strArray[1] = "São Paulo";

			std::cout << "Array size: " << strArray.size() << std::endl;
			for (unsigned int i = 0; i < strArray.size(); i++)
				std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;
		}

	
		std::cout << "\nTesting Deep Copy" << std::endl;
		{
			Array<int> original(3);
			for (unsigned int i = 0; i < original.size(); i++)
				original[i] = (i + 1) * 10;

			Array<int> copy(original);
			Array<int> assigned;
			assigned = original;

			std::cout << "Modifying copy and assigned arrays..." << std::endl;
			copy[0] = 999;
			assigned[0] = 777;

			std::cout << "Original[0]: " << original[0] << " \t(should remain 10)" << std::endl;
			std::cout << "Copy[0]:     " << copy[0] << " \t(should be 999)" << std::endl;
			std::cout << "Assigned[0]: " << assigned[0] << " \t(should be 777)" << std::endl;
		}
	}
    return 0;
}
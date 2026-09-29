/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:51:41 by namatias          #+#    #+#             */
/*   Updated: 2026/09/28 17:14:52 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	long index;

	std::vector<int> findVector;
	findVector.push_back(1);
	findVector.push_back(42);
	findVector.push_back(55);
	findVector.push_back(100);
	
	std::list<int> findList;
	findList.push_back(1);
	findList.push_back(42);
	findList.push_back(55);
	findList.push_back(9);
	findList.push_back(20);
	findList.push_back(55);
	findList.push_back(100);
	findList.push_back(55);

	try
	{
		std::vector<int>::iterator target = easyfind(findVector, 100);
		std::cout << "The first occurrence of the int " << *target;

		index = std::distance(findVector.begin(), target);
		std::cout << " is at index: " << index << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::list<int>::iterator target = easyfind(findList, 55);
		std::cout << "The first occurrence of the int " << *target;

		index = std::distance(findList.begin(), target);
		std::cout << " is at index: " << index << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
    {
		std::list<int>::iterator target = easyfind(findList, 999);
        std::cout << "Found: " << *target << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "SUCCESS: Exception caught -> " << e.what() << std::endl;
    }
}
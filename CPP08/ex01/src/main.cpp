/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:31:54 by namatias          #+#    #+#             */
/*   Updated: 2026/09/30 14:45:22 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "=== Subject Test ===" << std::endl;
    try 
	{
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }



    std::cout << "\n=== Exception Handling (Full Span & Insufficient Elements) ===" << std::endl;
    try 
	{
        Span sp(2);
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
    } 
	catch (const std::exception& e) 
	{
        std::cout << "SUCCESS Exception: " << e.what() << std::endl;
    }

    try 
	{
        Span sp(5);
        sp.addNumber(42);
        sp.shortestSpan();
    } 
	catch (const std::exception& e) 
	{
        std::cout << "SUCCESS Exception: " << e.what() << std::endl;
    }



    std::cout << "\n=== Test with 13,000 Numbers ===" << std::endl;
    try 
	{
        std::srand(std::time(0));

        unsigned int size = 13000;
        Span bigSpan(size);
        std::vector<int> numbers;

        for (unsigned int i = 0; i < size; ++i) 
            numbers.push_back(std::rand());

        bigSpan.addNumber(numbers.begin(), numbers.end());

        std::cout << "Successfully added " << size << " elements!" << std::endl;
	
        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
    } catch (const std::exception& e)
	{
        std::cerr << "Exception in stress test: " << e.what() << std::endl;
    }

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:33:24 by namatias          #+#    #+#             */
/*   Updated: 2026/07/06 19:06:52 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
		std::cout << "Error\nUsage: ./replace file_name s1_to_replace s2_new_value" << std::endl;
	else
	{
		std::string	file_name = argv[1];
		std::string new_file = file_name + ".replace";
		std::string	find = argv[2];
		std::string replace = argv[3];

		std::cout << file_name << std::endl;
		std::cout << find << std::endl;
		std::cout << replace << std::endl;
		std::cout << new_file << std::endl;

	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 13:45:04 by namatias          #+#    #+#             */
/*   Updated: 2026/09/18 16:34:35 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Style.hpp"

int main()
{
	Style style;

	{
		style.headerTest("myInfo Test");
		std::cout << std::endl;

		Data myInfo = {32, "Natalia"};

		std::cout << "-----Original Info-----" << std::endl;
		std::cout << "Adress: " << &myInfo << std::endl;
		std::cout << "Name: " << myInfo.str << std::endl;
		std::cout << "Age : " << myInfo.age << std::endl;
		std::cout << std::endl;

		uintptr_t raw = Serializer::serialize(&myInfo);
		Data* restored_Ptr = Serializer::deserialize(raw);
		std::cout << std::endl;

		std::cout << "-----Check Info After the Process-----" << std::endl;
		if (&myInfo == restored_Ptr)
		{
			std::cout << "Adress: " << restored_Ptr << std::endl;
			std::cout << "Name: " << restored_Ptr->str << std::endl;
			std::cout << "Age : " << restored_Ptr->age << std::endl;
			std::cout << std::endl;
		}
		else
			std::cout << "Error: The adress has changed!" << std::endl;
	}

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:08:32 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:49 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"
#include "SimpleClass.hpp"

int main( void )
{
	/*
	** Subject main test
	*/
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << std::endl;
	}
	{
		/*
		** Custom objects
		*/

		SimpleClass<std::string> Obj_a(1, "abc");
		SimpleClass<std::string> Obj_b(2, "abc");
		SimpleClass<std::string> Obj_c(3, "abC");
		SimpleClass<int> Obj_1(5, 42);
		SimpleClass<int> Obj_2(6, 41);

		std::cout << "Values and Id from the objs created:\n";
		std::cout << Obj_a << std::endl;
		std::cout << Obj_b << std::endl;
		std::cout << Obj_c << std::endl;
		std::cout << Obj_1 << std::endl;
		std::cout << Obj_2 << std::endl;

		std::cout << "\nIf equal return the second value:\n";
		std::cout << "min: " << ::min(Obj_a, Obj_b) << std::endl;
		std::cout << "max: " << ::max(Obj_a, Obj_b) << std::endl;

		std::cout << "\nCompare should work correctly:\n";
		std::cout << "min( Obj_a, Obj_c ) = " << ::min( Obj_a, Obj_c ) << std::endl;
		std::cout << "max( Obj_a, Obj_c ) = " << ::max( Obj_a, Obj_c ) << std::endl;
		std::cout << "min( Obj_1, Obj_2 ) = " << ::min( Obj_1, Obj_2 ) << std::endl;
		std::cout << "max( Obj_1, Obj_2 ) = " << ::max( Obj_1, Obj_2 ) << std::endl;

		/*
		** Different types wont compile
		*/
		// std::cout << "max: " << ::max(Obj_a, Obj_1) << std::endl;
	}
}

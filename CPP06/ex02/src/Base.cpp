/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 17:09:42 by namatias          #+#    #+#             */
/*   Updated: 2026/09/19 13:53:32 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
	else if (dynamic_cast<Base*>(p))
	{
		std::cout << "Base class" << std::endl;
	}
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		(void)dynamic_cast<Base&>(p);
		std::cout << "Base class" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
}

Base*	generate(void)
{
	/*
	** srand na main ira gerar um numero novo a cada vez que a main for executada
	** e é ela que gera as seeds que servem como base para o rand()
	** rand() cria numeros leatorios a partir de um valor inicial (seed)
	** por isso para garantir numeros aleatorios o srand se torna essencial
	*/
	unsigned random = rand() % 3;

	if (random == 0)
	{
		return (new A());
	}
	else if (random == 1)
	{
		return (new B());
	}
	else
		return (new C());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimpleClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:36:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:35 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIMPLECLASS_HPP
#define SIMPLECLASS_HPP

#include <iostream>

template <typename T>
class SimpleClass
{
	private:
	int	_id;
	T	_value;
	
	public:
	SimpleClass();
	SimpleClass(const SimpleClass&);
	SimpleClass& operator=(const SimpleClass&);
	~SimpleClass();
	
	SimpleClass(int id, T value);
	
	bool operator>(const SimpleClass&) const;
	bool operator<(const SimpleClass&) const;
	
	int getId() const;
	T getValue() const;
};

template <typename T>
std::ostream& operator<<(std::ostream& output, const SimpleClass<T>& obj);

#include "SimpleClass.tpp"

#endif
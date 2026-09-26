/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SimpleClass.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:29:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:36 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SimpleClass.hpp"

template <typename T>
SimpleClass<T>::SimpleClass(): _id(0), _value(0) {}

template <typename T>
SimpleClass<T>::SimpleClass(const SimpleClass& obj)
	: _id(obj._id), _value(obj._value) {}

template <typename T>
SimpleClass<T>& SimpleClass<T>::operator=(const SimpleClass& obj)
{
	if (this != &obj)
	{
		this->_value = obj._value;
	}
	return (*this);
}

template <typename T>
SimpleClass<T>::~SimpleClass() {}

template <typename T>
SimpleClass<T>::SimpleClass(int id, T value): _id(id), _value(value) {}

template <typename T>
bool SimpleClass<T>::operator>(const SimpleClass& obj) const
{
	if(this->_value > obj._value)
		return (1);
	return (0);
}

template <typename T>
bool SimpleClass<T>::operator<(const SimpleClass& obj) const
{
	if(this->_value < obj._value)
		return (1);
	return (0);
}

template <typename T>
int SimpleClass<T>::getId() const
{
	return (this->_id);
}

template <typename T>
T SimpleClass<T>::getValue() const
{
	return (this->_value);
}

template <typename T>
std::ostream& operator<<(std::ostream& output, const SimpleClass<T>& obj)
{
	output << "id: " << obj.getId() << " , value: " << obj.getValue();
	return (output); 
}

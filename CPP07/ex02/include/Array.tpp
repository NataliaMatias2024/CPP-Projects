/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:09:11 by namatias          #+#    #+#             */
/*   Updated: 2026/09/26 00:16:14 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(const Array& obj): _size(obj._size)
{
    this->_array = new T[this->_size]();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = obj._array[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
	if (this != &obj)
	{
		delete [] this->_array;
		this->_size = obj._size;
		this->_array = new T[_size];
		for (unsigned int i = 0; i < this->_size; i++)
			_array[i] = obj._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]()), _size(n) {}

template <typename T>
T& Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](const unsigned int index) const
{
	if (index >= _size)
		throw std::exception();
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
std::ostream&	operator<<(std::ostream& output, const Array<T>& array)
{
	for (unsigned int i = 0; i < array.size(); i++)
	{
		output << array[i];
		if (i < array.size() - 1)
			output << ", ";
	}
	return (output);
}
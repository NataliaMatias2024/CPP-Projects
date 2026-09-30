/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:35:48 by namatias          #+#    #+#             */
/*   Updated: 2026/09/30 14:50:02 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0){}

Span::Span(const Span& obj): _n(obj._n), _elements(obj._elements){}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		_n = obj._n;
		_elements = obj._elements;
	}
	return(*this);
}

Span::~Span(){}


Span::Span(unsigned int N): _n(N) {}

void	Span::addNumber(int value)
{
	if (this->_elements.size() >= _n)
		throw std::out_of_range("Error: Span is already full");
	_elements.push_back(value);
}

int		Span::shortestSpan() const
{
	if(this->_elements.size() < 2)
		throw std::out_of_range("Error: Insufficient elements for this operation");
	
	std::vector<int> aux = _elements;
	std::sort(aux.begin(), aux.end());

	int shortest = aux[1] - aux[0];
	for (size_t i = 2; i < aux.size(); i++)
	{
		int current = aux[i] - aux[i - 1];
		if (shortest > current)
			shortest = current;
	}
	return (shortest);
}

int		Span::longestSpan() const
{
	if(this->_elements.size() < 2)
		throw std::out_of_range("Error: Insufficient elements for this operation");
	
	std::vector<int> aux = _elements;
	std::vector<int>::iterator minValue = std::min_element(aux.begin(), aux.end());
	std::vector<int>::iterator maxValue = std::max_element(aux.begin(), aux.end());

	return (*maxValue - *minValue);
}


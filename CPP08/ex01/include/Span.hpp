/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:26:10 by namatias          #+#    #+#             */
/*   Updated: 2026/09/30 14:30:08 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_elements;
	public:
		Span();
		Span(const Span&);
		Span& operator=(const Span&);
		~Span();

		Span(unsigned int);

		void	addNumber(int);
		int		shortestSpan() const;
		int		longestSpan() const;


		template <typename Iterator>
		void addNumber(Iterator begin, Iterator end)
		{
			if (std::distance(begin, end) + static_cast<long>(_elements.size()) > static_cast<long>(_n))
				throw std::out_of_range("Error: Range exceeds Span capacity");
			_elements.insert(_elements.end(), begin, end);
		}
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:19:22 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:40 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template	<typename T>
T min(const T& value_1, const T& value_2)
{
	if (value_1 < value_2)
		return (value_1);
	return (value_2);	
}

template	<typename T>
T max(const T& value_1, const T& value_2)
{
	if (value_1 > value_2)
		return (value_1);
	return (value_2);	
}

template	<typename T>
void swap(T& value_1, T& value_2)
{
	T temp;
	temp = value_1;
	value_1 = value_2;
	value_2 = temp;
}

#endif

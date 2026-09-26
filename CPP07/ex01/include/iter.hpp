/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 20:41:10 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename U>
void	iter(T *array, const int length, U function)
{
	if (!array)
		return;
	for (int i = 0; i < length; i++)
		function(array[i]);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:39:15 by namatias          #+#    #+#             */
/*   Updated: 2026/09/28 16:36:55 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T& STL, int target)
{
	/*
	**Find return a iterator type data
	*/
	typename T::iterator position = std::find(STL.begin(), STL.end(), target);

	if (position == STL.end())
		throw std::exception();
	
	return (position);
}

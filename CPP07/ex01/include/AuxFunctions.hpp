/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AuxFunctions.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:36:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:21:31 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUXFUNCTIONS_HPP
#define AUXFUNCTIONS_HPP

#include <iostream>

template <typename T>
void print(const T& t);

void toUpperInPlace(char &c);

#include "AuxFunctions.tpp"

#endif
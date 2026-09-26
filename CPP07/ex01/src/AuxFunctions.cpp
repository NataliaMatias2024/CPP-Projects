/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AuxFunctions.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:19:39 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:21:38 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AuxFunctions.hpp"

void toUpperInPlace(char &c)
{
    c = static_cast<char>(std::toupper(c));
}

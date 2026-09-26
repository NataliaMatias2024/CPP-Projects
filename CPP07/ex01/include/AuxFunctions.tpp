/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AuxFunctions.tpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:29:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/25 22:11:30 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AuxFunctions.hpp"

template <typename T>
void print(const T& t)
{
  std::cout << t << std::endl;
}

void toUpperInPlace(char &c)
{
    c = static_cast<char>(std::toupper(c));
}

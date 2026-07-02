/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 18:55:42 by namatias          #+#    #+#             */
/*   Updated: 2026/07/02 20:19:46 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//New pode alocar tanto individualmente quanto de um bloco inteiro (array)
//new array[size()] -> Nesses casos n é possivel passar nenhum argumento além do size
//ANTES de alocar sempre verificar se size é valido (MAIOR q 0).
Zombie*	zombieHorde(int N, std::string name){

	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie [N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}

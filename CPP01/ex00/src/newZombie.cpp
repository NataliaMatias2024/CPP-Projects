/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 11:38:26 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 12:39:08 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//new é o equivalente ao malloc, em C++ essa key reserva espaço d memoria na Heap
//por isso esse zumbi, objeto, existirá até alguem chamar um delete (free do C)
// Zombie*	newZombie(std::string name);

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
//Nessa parte a função ocorre em 2 etapas.
//1º Cria um ponteiro na Stack (local), q indica a memoria reservada (Heap) com o obj
//2º Instancia o obj direto no HEAP utilizando a key new (malloc do C++)
	Zombie*	newzombie = new Zombie(name);

	return (newzombie);
}


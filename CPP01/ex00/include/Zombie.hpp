/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:45:32 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 11:29:48 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name);
	//n conseguimos passar parametros para o destrutor, apenas para o construtor
		~Zombie();

		void	announce(void) const;
};

//new é o equivalente ao malloc, em C++ essa key reserva espaço d memoria na Heap
//por isso esse zumbi, objeto, existirá até alguem chamar um delete (free do C)
Zombie*	newZombie(std::string name);

//Esse zumbi nao será usado depois, podendo morrer logo depois que for chamado
//Não terá alocação DINÂMICA de memória (sem uso do new)
//A memória é alocada automaticamente na Stack e liberada quando a função encerra.
void	randomChump(std::string name);

#endif

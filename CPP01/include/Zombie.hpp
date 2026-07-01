/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:45:32 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 10:51:22 by namatias         ###   ########.fr       */
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
//Nao terá alocação de memoria, encerrando após a função q o chamou encerrar
//Por isso fica na memoria Stack (alocação local)
void	randomChump(std::string name);

#endif

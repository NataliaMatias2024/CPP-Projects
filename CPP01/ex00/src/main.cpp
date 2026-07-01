/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:31:42 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 12:51:06 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
//nâo é possivel instaciar 2 objetos ao mesmo tempo, pois causa um erro de redefinição
//Por isso devemos instanciar com 2 métodos diferentes para testar

	//método "automático" -> Stack / memória local
	//Ao ser criado pelo construtor padrao, sem escrever um new manual
	//nao é necessario dar delete, pq destrutor será acionado automaticamente
	randomChump("Stack");

	//método manual -> Heap / memória de longo prazo, deve ser liberada manualmente
	//mesmo sendo chamado o delete manualmente, o bloco de codigo do destrutor é executado
	//sendo assim o delete é um detrutor turbinado pois destroi o obj + libera memoria Heap
	Zombie*	newCharacter = newZombie("Heap");
	newCharacter->announce();
	delete	newCharacter;
	newCharacter = NULL;

	return(0);
}

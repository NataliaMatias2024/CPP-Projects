/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:48:59 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 11:29:29 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Esse zumbi nao será usado novament, podendo morrer logo depois que for chamado
//Não terá alocação DINÂMICA de memória (sem uso do new)
//A memória é alocada automaticamente na Stack e liberada quando a função encerra.

#include "Zombie.hpp"

void	randomChump(std::string name)
{
//Instanciar um objeto, ou seja, declarar "uma variavel" com a estrutura interna da nossa classe
//Cria o espaço para salvar os dados direto na Stack, ou seja, localmente
//E é destruido assim q a função de encerra
	Zombie	zombie(name);
	zombie.announce();
}

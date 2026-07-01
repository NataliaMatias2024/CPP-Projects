/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 10:23:46 by namatias          #+#    #+#             */
/*   Updated: 2026/07/01 11:12:01 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Uma boa pratica é a Member Initializer List, onde sao listados as variaveis
//com seus respectivos valores de inicialização ANTES do corpo de codigo do construtor.
//Em projetos mais complexos isso irá poupar recursos de processamento.
//construtor (argumentos) : argumento(valor d inicialização), argumento2(valor 2) {resto codigo}
Zombie::Zombie(std::string name): _name(name){
	std::cout << _name << " is rising. Oh no he is alive!!" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Destroying.... " << _name << " are finally dead." << std::endl;
}

void	Zombie::announce(void) const{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

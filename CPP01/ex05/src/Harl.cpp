/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:30:36 by namatias          #+#    #+#             */
/*   Updated: 2026/07/08 12:33:05 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::info(void)
{
	std::cout << "---[INFO]---" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "---[DEBUG]---" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do!" << std::endl;
}

void Harl::error(void)
{
	std::cout << "---[ERROR]---" << std::endl;
	std::cout << "This is unacceptable!\n";
	std::cout << "I want to speak to the manager now." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "---[WARNING]---" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

/*
**	Para fazer uma tabela das funções membros precisamos listar:
**			1 - oq a tabela devolve (assinatura da função)
**			2 - a classe para o qual ela aponta os metodos (escopo da classe Harl)
**			3 - o argumento q ela irá receber
**	No nosso caso será void + Harl::*menu + void
**  Ou seja: retorno void, escopo da classe Harl, e sem argumentos
**
**	typedef -> Cria um alias para o tipo de dado que fornecemos para ele, sendo que o aliás, é o nome q definimos
**  como estamos nomeando um ponteiro entao é ele q será nosso alias. representando aquele tipo de função
**	entao o array functions de tamanho [4] é do tipo t_menu (ponteiro d metodos da classe Harl q retorna void e n recebe args)
**
**	static -> nesse escopo o static faz com q a variavel exista durante td o ciclo de vida do nosso programa
**	nao importando quantas vezes a gnt chame os metodos na main só existira um menuLevels e um menu functions
**	sem static a cada nova chamada esses arrays seriam construidos, processados e destruidos.
**
**	const -> Por estar no começo da declaração, define que os elementos do array são imutáveis,
** 	garantindo que o compilador impeça qualquer tentativa de alteração, sendo uma segurança a mais
** 	em casos d atualizações de codigo, manutenção, etc
** 	Fazendo parte das boas praticas ->'const-correctness' - oq nao deve ser alterado vm com const atrelado
**
*/
void Harl::complain(std::string level)
{
	static std::string	menuLevels[4] = {"info", "debug", "warning", "error"};
	typedef void (Harl::*t_menu) (void);
	static t_menu functions[4] = {&Harl::info, &Harl::debug, &Harl::warning, &Harl::error};
	int			i;

	i = 0;
	while(i < 4)
	{
		if (level == menuLevels[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
}

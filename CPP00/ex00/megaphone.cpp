/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:49:35 by namatias          #+#    #+#             */
/*   Updated: 2026/03/31 18:10:44 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	int	i;

    if (argc == 1) // se n escrever argumento nenhum imprime a msg base
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
	else
	{
		i = 1; //argc 0 é o nome do programa, por isso n consideramos
		while (i < argc) // irá andar pelos argumentos, cada i é um argumento inteiro
		{
			std::string str = argv[i];//while preenche a primeira palavra/argumento
			for (size_t j = 0; j < str.length(); j++) // anda letra por letra, ate deixar tds em caps
			{
				std::cout << (char)std::toupper(str[j]);//for transforma a primeira letra em maiusculo
			}
			if (i < argc - 1)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl; //imprime a nova linha
	}
    return 0;
}
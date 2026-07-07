/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:33:24 by namatias          #+#    #+#             */
/*   Updated: 2026/07/07 14:52:25 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

int	doTheReplace(std::string const file_name, std::string const target, std::string const replace);

int	main(int argc, char *argv[])
{
	if (argc != 4)
		std::cerr << "Error: Number of arguments\nUsage: ./replace <filename> <string1_target> <string2_replacement>" << std::endl;
	else
	{
		std::string	file_name = argv[1];
		std::string	target = argv[2];
		std::string replace = argv[3];

		if(target.empty() || replace.empty())
		{
			std::cerr << "Error: Invalid input. Strings can't be empty" << std::endl;
			return (1);
		}
		if (doTheReplace(file_name, target, replace))
			return (1);
	}
	return (0);
}
/*
**std::ifstream e std::ofstream, respectivamente, sao os responsaveis por abrir e escrever arquivos no C++
**Na versao 98 eles so aceitam strings com terminaçoes nulas como "example.txt", em casos onde n sejam
**passadas strings nesse formato se torna necessario usar o c_str(), ele adiciona o terminador nulo
**transformando o argumento em um tipo de string C.
*/
int	doTheReplace(std::string const file_name, std::string const target, std::string const replace)
{
	std::string new_file = file_name + ".replace";
	std::string	line;
	std::size_t	position;

	/*
    ** infile.peek() == std::ifstream::traits_type::eof()
    ** peek() -> Espia o próximo caractere apontado pelo cursor (sem avançar a posição do ponteiro).
    ** std::ifstream::traits_type::eof() -> Constante da biblioteca que representa o fim do arquivo (EOF).
    ** Resumo: Verifica se o arquivo está vazio, checando se o primeiro caractere já é um EOF.
    */
	std::ifstream	infile(file_name.c_str());
	if (!infile.is_open() || infile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: Could not open the file < " << file_name << " > or it is empty." << std::endl;
        return (1);
	}
	std::ofstream	outfile(new_file.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not create the output file "<< new_file << std::endl;
		return (1);
	}

	while (std::getline(infile, line))
	{
		position = line.find(target);
		while (position != std::string::npos)
		{
			line.erase(position, target.length());
			line.insert(position, replace);
			position = line.find(target, position + replace.length());
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	return (0);
}

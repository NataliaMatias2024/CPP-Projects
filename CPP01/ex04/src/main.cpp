/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 15:33:24 by namatias          #+#    #+#             */
/*   Updated: 2026/07/07 17:03:43 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>

int	doTheReplace(std::string const fileName, std::string const target, std::string const replace);

int	main(int argc, char *argv[])
{
	if (argc != 4)
		std::cerr << "Error: Number of arguments\nUsage: ./replace <filename> <string1_target> <string2_replacement>" << std::endl;
	else
	{
		std::string	fileName = argv[1];
		std::string	target = argv[2];
		std::string replace = argv[3];

		if(target.empty() || replace.empty())
		{
			std::cerr << "Error: Invalid input. Strings can't be empty" << std::endl;
			return (1);
		}
		if (doTheReplace(fileName, target, replace))
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
int	doTheReplace(std::string const fileName, std::string const target, std::string const replace)
{
	std::string new_file = fileName + ".replace";
	std::string	line;
	std::size_t	position;
	int			firstLine = 1;

	/*
    ** inFile.peek() == std::ifstream::traits_type::eof()
    ** peek() -> Espia o próximo caractere apontado pelo cursor (sem avançar a posição do ponteiro).
    ** std::ifstream::traits_type::eof() -> Constante da biblioteca que representa o fim do arquivo (EOF).
    ** Resumo: Verifica se o arquivo está vazio, checando se o primeiro caractere já é um EOF.
    */
	std::ifstream	inFile(fileName.c_str());
	if (!inFile.is_open() || inFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: Could not open the file < " << fileName << " > or it is empty." << std::endl;
        return (1);
	}
	std::ofstream	outFile(new_file.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Could not create the output file "<< new_file << std::endl;
		return (1);
	}

	while (std::getline(inFile, line))
	{
		position = line.find(target);
		while (position != std::string::npos)
		{
			line.erase(position, target.length());
			line.insert(position, replace);
			position = line.find(target, position + replace.length());
		}

		if (firstLine == 0)
			outFile << "\n";

		outFile << line;
		firstLine = 0;
	}

	inFile.close();
	outFile.close();
	return (0);
}

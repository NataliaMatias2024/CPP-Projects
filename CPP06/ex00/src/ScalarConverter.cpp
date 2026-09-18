/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:58:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/18 10:06:32 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
static bool isChar(const std::string& literal);

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
	(void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj)
{
	(void)obj;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string& literal)
{

	char	c = '\0';
	int		i = 0;
	float	f = 0.0f; //-inff, +inff, nanf
	double	d = 0.0; //-inf, +inf, nan
	bool	isCharOK = false;
	bool	isIntOK = false;
	bool	isFloatOK = false;
	bool	isDoubleOK = false;

	/*
	** Primeiro checamos por pseudo literais q são Floats ou Doubles
	*/
	const std::string pseudoLiterals[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++)
	{
		if (literal == pseudoLiterals[i])
		{
			std::cout << "char:   Impossible to convert" << std::endl;
			std::cout << "int:    Impossible to convert" << std::endl;
			if (i <= 2)
			{
				std::cout << "float:  " << literal << std::endl;
				std::cout << "double: " << pseudoLiterals[3 + i] << std::endl;
			}
			else
			{
				std::cout << "float:  " << pseudoLiterals[i - 3] << std::endl;
				std::cout << "double: " << literal << std::endl;
			}
			return ;
		}
	}

	/*
	** A segunda etapa é identificar SE o tipo de dado recebido
	** é char, pois char é o menor dado que temos e conseguimos
	** converter td de forma direta a partir dele
	*/
	if (isChar(literal))
    {
		c = literal[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
		isCharOK = isIntOK = isFloatOK = isDoubleOK = true;
    }
	else
	{
		/*
		** Convertemos primeiro pra double que é nosso maior tipo de dado
		** se der erro de range nele dara em todos os outros!
		** alem disso se o final da string for alguma letra diferente de f (float)
		** teremos uma string invalida 
		*/
		char *end;
		errno = 0;
		double auxD = std::strtod(literal.c_str(), &end);
		if (errno == ERANGE || (*end != 'f' && *end != '\0'))
		{
			// Se a string for algo como "abacate", tipo completamente inválido
			std::cout << "char:   Invalid Arg" << std::endl;
			std::cout << "int:    Invalid Arg" << std::endl;
			std::cout << "float:  Invalid Arg" << std::endl;
			std::cout << "double: Invalid Arg" << std::endl;
			return ;
		}
		isDoubleOK = true;
		d = auxD;
		/*
		** Para converter para os outros tipos temos que chegar se nosso double
		** esta dentro do range para qual será convertido
		*/
		if (d <= static_cast<double>(std::numeric_limits<unsigned char>::max()) 
			&& d >= static_cast<double>(std::numeric_limits<unsigned char>::min()))
		{
			c = static_cast<char>(d);
			isCharOK = true;
		}

		if (d <= static_cast<double>(std::numeric_limits<int>::max())
			&& d >= static_cast<double>(std::numeric_limits<int>::min()))
		{
			i = static_cast<int>(d);
			isIntOK = true;
		}
			
		if (d <= static_cast<double>(std::numeric_limits<float>::max())
			&& d >= -static_cast<double>(std::numeric_limits<float>::max()))
		{
			f = static_cast<float>(d);
			isFloatOK = true;
		}
	}

	/*
	** Printar variaveis convertidas
	** Primeiro verificamos se conversao deu certo
	** para o char especificamente tbm temos que verificar se o valor é printavel
	*/

	if (!isCharOK)
		std::cout << "char:   Impossible to convert" << std::endl;
	else if (!std::isprint(static_cast<unsigned char>(c)))
		std::cout << "char:   Non displayable" << std::endl;
	else
		std::cout << "char:   '" << c << "'" << std::endl;

	if (!isIntOK)
		std::cout << "int:    Impossible to convert" << std::endl;
	else
		std::cout << "int:    " << i << std::endl;

	if (!isFloatOK)
		std::cout << "float:  Impossible to convert" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float:  " << f << "f" << std::endl;

	if (!isDoubleOK)
		std::cout << "double: Impossible to convert" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}

static bool isChar(const std::string& literal)
{
    /*
    ** Char tem o tamanho de 1 caracter E não é um digito
    */
	if (literal.length() == 1 && !std::isdigit(literal[0]))
		return (true);
	return (false);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:58:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/16 16:03:09 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
static bool isInt(const std::string& literal);
static bool isChar(const std::string& literal);
static bool isFloat(const std::string& literal);
static bool isDouble(const std::string& literal);

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
	long	aux;
	bool	isImpossible = false;

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
	** A segunda etapa é identificar o tipo de dado recebido
	** E a partir do tipo base fazer o cast para os outros tipos
	*/
	if (isChar(literal))
    {
		c = literal[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
    }
	else if (isInt(literal))
	{
		aux = std::strtol(literal.c_str(), NULL, 10);
		if (aux >= std::numeric_limits<int>::max() || aux <= std::numeric_limits<int>::min())
			isImpossible = true;
		else
		{
			i = static_cast<int>(aux);
			c = static_cast<char>(i);
			f = static_cast<float>(i);
			d = static_cast<double>(i);
		}
	}
	else if (isDouble(literal))
	{
		aux = std::strtod(literal.c_str(), NULL);
		if (aux >= std::numeric_limits<double>::max() || aux <= std::numeric_limits<double>::min())
		    isImpossible = true;
		else
		{
			d = static_cast <double> (aux);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			c = static_cast<char>(i);
		}
	}
	else if (isFloat(literal))
	{
		aux = std::strtof(literal.c_str(), NULL);
		if (aux >= std::numeric_limits<float>::max() || aux <= std::numeric_limits<float>::min())
			isImpossible = true;
		else
		{
			f = static_cast <float> (aux);
			i = static_cast <int> (f);
			c = static_cast<char>(i);
			d = static_cast <double> (f);
		}
	}
	else
	{
        // Se a string for algo como "abacate", tipo completamente inválido
		std::cout << "char:   Invalid Arg" << std::endl;
		std::cout << "int:    Invalid Arg" << std::endl;
		std::cout << "float:  Invalid Arg" << std::endl;
		std::cout << "double: Invalid Arg" << std::endl;
		return;
    }


	//Printar variaveis convertidas
	if (c < 0 || c > 127 || c == '\0')
		std::cout << "char:   Impossible to convert" << std::endl;
	else if (std::isprint(c))
		std::cout << "char:   '" << c <<"' " << std::endl;
	else
		std::cout << "char:   Non displayable" << std::endl;
	if (!isImpossible)
	{
		//Print apenas INT ( -2147483647 >= i <= 2147483647)
		std::cout << "int:    " << i << std::endl;
		//Print apenas float
		std::cout << "float:  " << f <<"f " << std::endl;
		//Print apenas DOUBLE
		std::cout << "double: " << d << std::endl;
	}
}

static bool isInt(const std::string& literal)
{
	/*
	** Int tem apenas numeros E pode ou não ter +/- na frente
	*/
	size_t i = 0;

	if (literal[0] == '+' || literal[0] == '-')
		i++;

	// Se for apenas "-" ou "+", é falso
	if (i == literal.length())
		return (false);

	while(i < literal.length())
	{
		if(!std::isdigit(literal[i]))
			return (false);
		i++;
	}
	return (true);
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

static bool isDouble(const std::string& literal)
{
	/*
	** Double tem apenas numeros e um único . (ponto decimal)
	*/
	size_t i = 0;
	int dot_count = 0;
	int digit_count = 0;

	if (literal[0] == '+' || literal[0] == '-')
		i++;

	if (i == literal.length())
		return (false);

	while(i < literal.length())
	{
		if (literal[i] == '.')
			dot_count++;
		else if (std::isdigit(literal[i]))
			digit_count++;
		else
			return (false);
		i++;
	}

	// Deve ter exatamente UM . E ter pelo menos um número (evita strings como ".")
	if (dot_count == 1 && digit_count > 0)
		return (true);
	return (false);
}

static bool isFloat(const std::string& literal)
{
	/*
	** Float tem apenas numeros e um único . (ponto decimal)
	** finalizando sempre com um f
	*/
	size_t i = 0;
	int dotCount = 0;
	int digitCount = 0;

	if (literal[0] == '+' || literal[0] == '-')
		i++;

	if (i == literal.length())
		return (false);

	// Precisa terminar com f
	if (literal[literal.length() - 1] != 'f')
		return (false);

	//Looping "ignora" o f do final
	while(i < literal.length() - 1)
	{
		if (literal[i] == '.')
			dotCount++;
		else if (std::isdigit(literal[i]))
			digitCount++;
		else
			return (false);
		i++;
	}

	// Deve ter exatamente UM . E ter pelo menos um número (evita strings como ".")
	if (dotCount == 1 && digitCount > 0)
		return (true);
	return (false);
}


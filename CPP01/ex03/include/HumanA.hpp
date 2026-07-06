/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 11:39:25 by namatias          #+#    #+#             */
/*   Updated: 2026/07/06 15:19:53 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

/*
** Nesse caso weapon é uma REFERENCIA, ou seja, um alias da classe weapon
** Ela sempre irá existir nesse objeto, por isso pode ser inicializada com o valor correto na hora que for instanciada
*/
class	HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack() const;
};

#endif

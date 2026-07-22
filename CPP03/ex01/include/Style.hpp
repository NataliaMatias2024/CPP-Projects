/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:11:24 by namatias          #+#    #+#             */
/*   Updated: 2026/07/22 11:24:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STYLE_HPP
#define STYLE_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class Style
{
	public:
		Style();
		Style(const Style&);
		Style& operator=(const Style&);
		~Style();

		void	headerTest();
		void	headerTable();
		void	displayStatus(const ClapTrap &obj1);
};

#endif

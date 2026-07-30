/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Style.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:52:05 by namatias          #+#    #+#             */
/*   Updated: 2026/07/30 14:37:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STYLE_HPP
#define STYLE_HPP

#include "AAnimal.hpp"
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
		void	displayStatus(const AAnimal& obj1, const void* address);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:56:16 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 15:47:27 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONCAT_HPP
#define WRONCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat&);
		WrongCat& operator=(const WrongCat&);
		~WrongCat();

		void	makeSound() const;

		std::string		getType() const;
		std::string		makeSoundTest() const;
};

#endif

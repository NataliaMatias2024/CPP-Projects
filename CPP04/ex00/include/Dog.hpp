/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:34:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:32:54 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();

		void			makeSound() const;
		std::string		makeSoundTest() const;
};

#endif

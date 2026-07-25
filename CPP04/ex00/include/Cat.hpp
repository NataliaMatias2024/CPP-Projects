/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:34:10 by namatias          #+#    #+#             */
/*   Updated: 2026/07/25 16:32:50 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();

		void			makeSound() const;
		std::string		makeSoundTest() const;
};

#endif

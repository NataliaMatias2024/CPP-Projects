/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:34:13 by namatias          #+#    #+#             */
/*   Updated: 2026/07/29 15:52:20 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* _idea;
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();

		void			makeSound() const;
		std::string 	getThought() const;

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif

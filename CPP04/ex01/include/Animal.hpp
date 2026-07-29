/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:34:05 by namatias          #+#    #+#             */
/*   Updated: 2026/07/29 15:52:16 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();

		Animal(const std::string& type);

		virtual void	makeSound() const;

		std::string				getType() const;
		virtual std::string 	getThought() const;

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif

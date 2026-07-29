/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 11:00:26 by namatias          #+#    #+#             */
/*   Updated: 2026/07/29 15:51:15 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();

		Brain(std::string idea);

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;
};

#endif

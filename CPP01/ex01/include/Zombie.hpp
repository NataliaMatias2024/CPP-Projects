/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 12:45:32 by namatias          #+#    #+#             */
/*   Updated: 2026/07/02 19:44:46 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		~Zombie();

		void	announce(void) const;
		void	setName(const std::string& name);
};

Zombie* zombieHorde(int N, std::string name);

#endif

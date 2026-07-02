/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 12:55:33 by namatias          #+#    #+#             */
/*   Updated: 2026/07/02 19:59:53 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;

	N = 5;
	Zombie*	horde = zombieHorde(N, "teste_zumbi");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zumbi " << i + 1 << " announce -> ";
		horde[i].announce();
	}

	std::cout << "\nStarting to decimate the horde:\n" << std::endl;
	delete[] horde;
	horde = NULL;

	return(0);
}

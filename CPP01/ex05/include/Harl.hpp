/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 15:07:56 by namatias          #+#    #+#             */
/*   Updated: 2026/07/07 17:21:21 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		void	info(void);
		void	debug(void);
		void	error(void);
		void	warning(void);

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif

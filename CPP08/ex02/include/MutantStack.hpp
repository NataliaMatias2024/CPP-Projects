/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:51:57 by namatias          #+#    #+#             */
/*   Updated: 2026/09/30 17:49:18 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

/*
** Cpp reference give the template , describeing the stack as
** a container adaptor and not a container it self
*/
template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(): std::stack<T, Container>() {}
		MutantStack(const MutantStack& obj): std::stack<T, Container>(&obj) {}
		MutantStack& operator=(const MutantStack& obj)
		{
			if (this != &obj)
			{
				std::stack<T, Container>::operator=(obj);
			}
			return (*this);
		}
        virtual ~MutantStack() {}

        typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

        iterator    begin() {return (this->c.begin());}
        iterator    end() {return (this->c.end());}

		const_iterator    begin() const {return (this->c.begin());}
        const_iterator    end() const {return (this->c.end());}

};

#endif

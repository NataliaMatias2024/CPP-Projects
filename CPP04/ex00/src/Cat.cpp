/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 18:00:41 by namatias          #+#    #+#             */
/*   Updated: 2026/07/28 22:57:48 by namatias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor Called" << std::endl;
}

/*
** Copy Constructor
**
** Added the Initialization List (Animal(obj)) and removed *this = obj; from the body.
** *this = obj; (calling the assignment operator) while the object is being born is 
** considered a dangerous anti-pattern. If the class had dynamically allocated pointers (like in ex01),
** it would cause a "Segmentation Fault" because the operator would try to delete memory garbage.
** To maintain consistency across the module, I chose to update this method here as well.
**
** [HOW IT WORKS NOW]: The Animal(obj) forces the compiler to pass the copy responsibility 
** to the base class. The Animal "shell" is safely copied BEFORE we enter the Cat constructor's braces. 
** The object is born with the correct data already in place.
*/
Cat::Cat(const Cat& obj): Animal(obj)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

/*
** Assignment Operator
**
** Replaced the manual assignment (this->_type = obj._type;) with Animal::operator=(obj);.
** Because this way the code will have a better maintainability and clean architecture
** The derived class shouldn't directly access or alter the base class attributes
** Plus, there is no performance loss, because the compiler performs "Inlining",
** pasting the base instructions directly here during compilation.
**
** [HOW IT WORKS NOW]: We pause execution in the Cat, delegate the data update to the base class 
** (which knows exactly which and how many variables it holds), and then return. 
** If Animal class gains new variables in the future, Cat auto-updates without us needing to change anything here.
*/
Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meoowww meooooowwwwwww!" << std::endl;
}

std::string	Cat::makeSoundTest() const
{
	std::string sound = "meoowww meooooowwwwwww!";
	return (sound);
}

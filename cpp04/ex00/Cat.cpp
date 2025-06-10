/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:24:03 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:24:05 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "cat";
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}
Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}
Cat &Cat::operator=(const Cat &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;

	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->getType() << ": Miaouu" << std::endl;
}
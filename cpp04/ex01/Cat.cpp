/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:25:47 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:25:49 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat &cpy): Animal(cpy)
{
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
	*this = cpy;
}
Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
	delete(this->brain);
}
Cat &Cat::operator=(const Cat &cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		*this->brain = *cpy.brain;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << this->getType() << ": Miaouu" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
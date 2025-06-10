/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:14:16 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:14:18 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;

	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Default animal don't make sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
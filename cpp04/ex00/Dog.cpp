/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:24:17 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:24:19 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}
Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}
Dog &Dog::operator=(const Dog &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;
		
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": Wouaaaaf" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:26:55 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:26:56 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog &cpy): Animal(cpy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = cpy;
}
Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
	delete(this->brain);
}
Dog &Dog::operator=(const Dog &cpy)
{
	if (this != &cpy)
	{
		this->type = cpy.type;
		*this->brain = *cpy.brain;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << ": Wouaaaaf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:26:04 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:26:04 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &cpy);
	virtual ~Dog();
	Dog &operator=(const Dog &cpy);
	void makeSound() const;
	Brain *getBrain() const;
};


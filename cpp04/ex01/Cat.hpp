/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:25:53 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:25:54 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();
	Cat &operator=(const Cat &cpy);
	void makeSound() const;
	Brain *getBrain() const;
};


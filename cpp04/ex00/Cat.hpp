/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:24:10 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:24:11 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
private:
public:
	Cat();
	Cat(const Cat &cpy);
	virtual ~Cat();
	Cat &operator=(const Cat &cpy);
	void makeSound() const;
};


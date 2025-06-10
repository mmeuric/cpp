/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:25:00 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:25:02 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
	*this = cpy;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	if (this != &cpy)
		this->type = cpy.type;

	return (*this);
}

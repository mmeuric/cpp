/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:28:18 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:28:20 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice( const Ice & src)
{
	*this = src;
}

Ice::~Ice()
{
}

Ice &Ice::operator=( Ice const & rhs )
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
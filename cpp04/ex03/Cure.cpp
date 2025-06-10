/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:28:04 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:28:06 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure( const Cure & src )
{
	*this = src;
}

Cure::~Cure()
{
}

Cure &Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:27:31 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:27:33 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* nothing on " << target.getName() << std::endl;
}

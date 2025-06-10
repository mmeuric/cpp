/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:09:38 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:09:39 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = val << fract;
}
Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << fract));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout<< "Copy assignement operator called" << std::endl;
	this->value = other.getRawBits();

	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits (int const raw)
{
	this->value = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fx)
{
    os << fx.toFloat();  
    return os;  
}

int	Fixed::toInt(void) const
{
	return this->value >> fract;
}

float Fixed::toFloat(void) const
{
	return ((float) this->value / (float)(1 << fract));
}
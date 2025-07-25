/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:10:02 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:10:05 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fract = 8;

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(Fixed const &cpy)
{
	*this = cpy;
}

Fixed::Fixed(int val)
{
	this->value = val << fract;
}
Fixed::Fixed(float val)
{
	this->value = roundf(val * (1 << fract));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
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

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result;
	result.setRawBits (this->value + other.getRawBits());
	return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed result;
	result.setRawBits (this->value - other.getRawBits());
	return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed result;
	result.setRawBits((this->value * (1 << fract)) / other.getRawBits());
	return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed result;
	result.setRawBits((this->value * other.getRawBits()) / (1 << fract));
	return result;
}


Fixed Fixed::operator++()
{
	++this->value;
	return *this;
}
Fixed Fixed::operator--()
{
	--this->value;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

bool Fixed::operator<=(const Fixed &other)
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator!=(const Fixed &other)
{
	return (this->toFloat() != other.toFloat());
}

bool Fixed::operator==(const Fixed &other)
{
	return (this->toFloat() == other.toFloat());
}
bool Fixed::operator>=(const Fixed &other)
{
	return (this->toFloat() >= other.toFloat());
}
bool Fixed::operator<(const Fixed &other)
{
	return (this->toFloat() < other.toFloat());
}
bool Fixed::operator>(const Fixed &other)
{
	return (this->toFloat() > other.toFloat());
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	return (left.toFloat() < right.toFloat() ? left : right);
}
Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	return (left.toFloat() > right.toFloat() ? left : right);
}

Fixed const &Fixed::min(const Fixed &left, const Fixed &right)
{
	return (left.toFloat() < right.toFloat() ? left : right);
}
Fixed const &Fixed::max(const Fixed &left, Fixed const &right)
{
	return (left.toFloat() > right.toFloat() ? left : right);
}


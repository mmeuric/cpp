/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:11:51 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:11:53 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string n): ClapTrap(n)
{
	std::cout << "FragTrap " << n << " has been created" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " has been destroyed " << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other.name << " has been created" << std::endl;
	*this = other;
}
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->attackDamage = other.attackDamage;
		this->energyPoint = other.energyPoint;
		this->hitPoint = other.hitPoint;	
	}

	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " want to high five !"<< std::endl;
}
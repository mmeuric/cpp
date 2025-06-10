/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeuric <mmeuric@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 23:11:17 by mmeuric           #+#    #+#             */
/*   Updated: 2025/06/10 23:11:19 by mmeuric          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor has been called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	this->guarding = false;
}

ScavTrap::ScavTrap(std::string n): ClapTrap(n)
{
	std::cout << "ScavTrap " << n << " has been created" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
	this->guarding = false;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " has been destroyed " << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << other.name << " has been created" << std::endl;
	*this = other;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;	
		this->energyPoint--;
	}
	else if (this->hitPoint == 0)
		std::cout << "ScavTrap " << this->name << " cannot attack because he's dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " cannot attack because he have no energy point" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::string msg = !this->guarding ? " is now guarding the gate" : " stop guarding the gate";
	this->guarding = !this->guarding;
	std::cout << "ScavTrap " << this->name << msg << std::endl;
}